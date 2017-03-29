#define DATABASE_MYSQL

#include <QGuiApplication>
#include <QQmlApplicationEngine>

//#include <odb/database.hxx>
//#include <odb/transaction.hxx>

//#include "database.hxx" // create_database

#include "..\indiprov\Model\vertex.hxx"
#include "..\indiprov\Model\edge.hxx"
//#include "..\indiprov\Controller\vertex-actions.hxx"
//#include "..\indiprov\Controller\edge-actions.hxx"


int main(int argc, char *argv[])
{
    //std::auto_ptr<database> db(create_database (argc, argv));
    //result<Vertex> r(db->query<Vertex>());

    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QLatin1String("qrc:/main.qml")));
    
    return app.exec();
}
