#ifndef MYBUTTON_H
#define MYBUTTON_H
#include <QPushButton>

class MyButton : public QPushButton
{
    Q_OBJECT
public:
    MyButton(QWidget *parent = 0);
    ~MyButton();
    QPixmap*buttonPicture;
    QPixmap*pressPicture;
    void setButtonPicture(QString path);
    void setPressPicture(QString path);
    void set_X_Y_width_height(int x, int y, int width, int height) ;
private:
    void MyButton::mouseDoubleClickEvent(QMouseEvent *event) ;
    void MyButton::mousePressEvent (QMouseEvent *event);
    void MyButton::mouseMoveEvent(QMouseEvent *event);
    void MyButton::mouseReleaseEvent (QMouseEvent *event);
};

#endif // MYBUTTON_H
