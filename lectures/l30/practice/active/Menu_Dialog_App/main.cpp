#include "mainwindow.h"
#include <QtGui>
#include <QApplication>
#include <QtWidgets>
//------------------------------------------
void loadModules(QSplashScreen* psplash)
{
    QElapsedTimer time_;
    time_.start();

    for (int i = 0; i < 100; ) {
        if (time_.elapsed() > 40) {
            time_.start();
            ++i;
        }
        psplash->showMessage("Loading modules: "
                             + QString::number(i) + "%",
                             Qt::AlignHCenter | Qt::AlignBottom ,
                             Qt::white
                            );
    }
}
//------------------------------------------
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QString APP_ABS_PATH = QCoreApplication::applicationDirPath();

    QSplashScreen splash(QPixmap(APP_ABS_PATH+"/screen.jpg"));

        splash.show();

        MainWindow w;
      //  QLabel lbl(&w);
      //  lbl.setText("<H1><CENTER>Моё приложение<BR>"
             //      "Is Ready!</CENTER></H1>"
             //     );
      //  lbl.setAlignment(Qt::AlignHCenter);
      //  lbl.setGeometry(5,5,w.width(),w.height());

        loadModules(&splash);

        splash.finish(&w);

        w.show();
    return a.exec();
}
