/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -N -p fcitxqtcontrollerproxy -c
 * FcitxQtControllerProxy interfaces/org.fcitx.Fcitx.Controller1.xml -i
 * fcitxqtdbustypes.h -i fcitx5qt6dbusaddons_export.h
 *
 * qdbusxml2cpp is Copyright (C) 2023 The Qt Company Ltd and other contributors.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#include "fcitxqtcontrollerproxy.h"

namespace fcitx {

/*
 * Implementation of interface class FcitxQtControllerProxy
 */

FcitxQtControllerProxy::FcitxQtControllerProxy(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent)
    : QDBusAbstractInterface(service, path, staticInterfaceName(), connection, parent)
{
}

FcitxQtControllerProxy::~FcitxQtControllerProxy()
{
}

}
