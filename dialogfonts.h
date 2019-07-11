#ifndef DIALOGFONTS_H
#define DIALOGFONTS_H

#include <QDialog>

#include <QFontDatabase>
#include <QDesktopWidget>
#include <QListWidgetItem>
#include <QDebug>

namespace Ui {
class DialogFonts;
}

class DialogFonts : public QDialog
{
    Q_OBJECT

public:
    explicit DialogFonts(QWidget *parent = nullptr);
    ~DialogFonts();

private slots:

    void on_listWidget_Font_itemClicked(QListWidgetItem *item);

    void on_listWidget_Style_itemClicked(QListWidgetItem *item);

private:
    Ui::DialogFonts *ui;

    QFontDatabase database;

    QDesktopWidget desktopWidget;
    int width = desktopWidget.width();
    int height = desktopWidget.height();

<<<<<<< HEAD
    QFontDatabase database;
=======
private slots:
    void changeExampleFont();

    void on_listWidget_Font_itemSelectionChanged();
    void on_listWidget_Style_itemSelectionChanged();
    void on_listWidget_Size_itemSelectionChanged();
>>>>>>> fc7ee931c059c4f8e1a00213f7274be4747626eb
};

#endif // DIALOGFONTS_H
