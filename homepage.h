#ifndef HOMEPAGE_H
#define HOMEPAGE_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class HomePage;
}
QT_END_NAMESPACE

class HomePage : public QWidget
{
    Q_OBJECT

public:
    HomePage(QWidget *parent = nullptr);
    ~HomePage();

private:
    Ui::HomePage *ui;
};
#endif // HOMEPAGE_H
