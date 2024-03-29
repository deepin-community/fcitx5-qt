/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -N -p fcitx4inputcontextproxyimpl -c
 * Fcitx4InputContextProxyImpl org.fcitx.Fcitx.InputContext.xml
 * org.fcitx.Fcitx.InputContext
 *
 * qdbusxml2cpp is Copyright (C) 2022 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef FCITX4INPUTCONTEXTPROXYIMPL_H
#define FCITX4INPUTCONTEXTPROXYIMPL_H

#include "fcitxqtdbustypes.h"
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QObject>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

namespace fcitx {
/*
 * Proxy class for interface org.fcitx.Fcitx.InputContext
 */
class Fcitx4InputContextProxyImpl : public QDBusAbstractInterface {
    Q_OBJECT
public:
    static inline const char *staticInterfaceName() {
        return "org.fcitx.Fcitx.InputContext";
    }

public:
    Fcitx4InputContextProxyImpl(const QString &service, const QString &path,
                                const QDBusConnection &connection,
                                QObject *parent = nullptr);

    ~Fcitx4InputContextProxyImpl();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> DestroyIC() {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("DestroyIC"),
                                         argumentList);
    }

    inline QDBusPendingReply<> FocusIn() {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("FocusIn"),
                                         argumentList);
    }

    inline QDBusPendingReply<> FocusOut() {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("FocusOut"),
                                         argumentList);
    }

    inline QDBusPendingReply<int> ProcessKeyEvent(unsigned int keyval,
                                                  unsigned int keycode,
                                                  unsigned int state, int type,
                                                  unsigned int time) {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(keyval)
                     << QVariant::fromValue(keycode)
                     << QVariant::fromValue(state) << QVariant::fromValue(type)
                     << QVariant::fromValue(time);
        return asyncCallWithArgumentList(QStringLiteral("ProcessKeyEvent"),
                                         argumentList);
    }

    inline QDBusPendingReply<> Reset() {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("Reset"), argumentList);
    }

    inline QDBusPendingReply<> SetCapacity(unsigned int caps) {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(caps);
        return asyncCallWithArgumentList(QStringLiteral("SetCapacity"),
                                         argumentList);
    }

    inline QDBusPendingReply<> SetCursorRect(int x, int y, int w, int h) {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(x) << QVariant::fromValue(y)
                     << QVariant::fromValue(w) << QVariant::fromValue(h);
        return asyncCallWithArgumentList(QStringLiteral("SetCursorRect"),
                                         argumentList);
    }

    inline QDBusPendingReply<> SetSurroundingText(const QString &text,
                                                  unsigned int cursor,
                                                  unsigned int anchor) {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(text) << QVariant::fromValue(cursor)
                     << QVariant::fromValue(anchor);
        return asyncCallWithArgumentList(QStringLiteral("SetSurroundingText"),
                                         argumentList);
    }

    inline QDBusPendingReply<> SetSurroundingTextPosition(unsigned int cursor,
                                                          unsigned int anchor) {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(cursor)
                     << QVariant::fromValue(anchor);
        return asyncCallWithArgumentList(
            QStringLiteral("SetSurroundingTextPosition"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void CommitString(const QString &str);
    void CurrentIM(const QString &name, const QString &uniqueName,
                   const QString &langCode);
    void DeleteSurroundingText(int offset, unsigned int nchar);
    void ForwardKey(unsigned int keyval, unsigned int state, int type);
    void UpdateFormattedPreedit(FcitxQtFormattedPreeditList str, int cursorpos);
};

} // namespace fcitx

#endif
