/** @file Connection.hpp
 **
 ** This file is an improved version of the Qt example available at 
 ** https://code.qt.io/cgit/qt/qtbase.git/tree/examples/sql/connection.h.
 **
 ** It proposes a class-based (instead of function-based) programmation,
 ** avoids static methods when possible, and allows dynamic
 ** definition of the database from a SQL queries file 
 ** (instead of hard-coded queries).
 **
 ** @author  A. Scheuer, correcting a Qt example.
 **/

#ifndef AJS_DATABASE
#define AJS_DATABASE

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QFile>

/** @brief This database adds a new constructor to QSqlDatabase, 
 **        as well as a SQL queries file loading.
 **/
class ASqlDatabase : public QSqlDatabase {
public:
  /** @brief Create the database of given type and name. 
   **
   ** @param  type  the type of the database,
   ** @param  name  the name of the database.
   **
   ** @see QSqlDatabase::QSqlDatabase(const QString&), 
   **      QSqlDatabase::setDatabaseName(const QString&).
   **/
  ASqlDatabase(const QString& type, const QString& name)
    // Uses the protected constructor, and setDatabaseName
    : QSqlDatabase(type) { setDatabaseName(name); }

  /** @brief Exec a sequence of queries given in a file 
   **        (one per line) and return the last executed. 
   **
   ** The sequence stops when a query generates a error, 
   ** or when the last line of the file has been read.
   **
   ** @param  file  the file containing the SQL queries.
   **
   ** @return  the last query executed.
   **
   ** @see QSqlDatabase::exec.
   **/
  QSqlQuery exec_file(QFile& file) {
    // the query uses this database (not the default)
    QSqlQuery result(*this); 
    if ( ( file.isOpen() && file.isReadable() )
	 || file.open(QIODevice::ReadOnly) ) {
      while ( (! lastError().isValid() ) && (! file.atEnd() ) )
	// reads the query in the file, and execs it
	result = exec( QString( file.readLine(1000) ) );
      file.close();
    } // end of if (file opened)
    return result; 
  } // end of QSqlQuery exec(const QFile&)
  
}; // end of class ASqlDatabase

#endif // AJS_DATABASE
