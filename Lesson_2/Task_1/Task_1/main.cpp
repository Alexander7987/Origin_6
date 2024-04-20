#include <QCoreApplication>
#include <QSqlDatabase>
#include <QLocalSocket>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QSqlDatabase db;
    QLocalSocket socket;

    return a.exec();
}
