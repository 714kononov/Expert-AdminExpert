#ifndef PHOTOVIDEO_H
#define PHOTOVIDEO_H

#include <QDialog>
#include <abouttovar.h>

namespace Ui {
class PhotoVideo;
}

class PhotoVideo : public QDialog
{
    Q_OBJECT

public:
    explicit PhotoVideo(QWidget *parent = nullptr);
    ~PhotoVideo();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::PhotoVideo *ui;
    AboutTovar *abouttovar;
};

#endif // PHOTOVIDEO_H
