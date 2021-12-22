#ifndef PINSCREENSHOTS_H
#define PINSCREENSHOTS_H

#include <QObject>
#include <QImage>
class PinScreenShots : public QObject
{
    Q_OBJECT
public:
    explicit PinScreenShots(QObject *parent = nullptr);

    Q_INVOKABLE bool openFile(QString filePath);

    //使用Q_INVOKABLE来修饰成员函数，目的在于被修饰的成员函数能够被元对象系统所唤起。
    Q_INVOKABLE void openImage(QImage image);

    Q_INVOKABLE void openImageAndName(QImage image, QString imageName);

signals:

public slots:

private:
    int m_loadingCount;//启动次数
};

#endif // PINSCREENSHOTS_H