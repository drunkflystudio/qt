/* This file is autogenerated. DO NOT CHANGE. All changes will be lost */

#ifndef QPROTOBUF_QTCORE_H
#define QPROTOBUF_QTCORE_H

#include <QtProtobuf/qprotobufmessage.h>
#include <QtProtobuf/qprotobufobject.h>
#include <QtProtobuf/qprotobuflazymessagepointer.h>

#include <QtCore/qbytearray.h>
#include <QtCore/qstring.h>
#include <QtProtobuf/qprotobufoneof.h>
#include "protobufqtcoretypes_exports.qpb.h"

#include <QtCore/qmetatype.h>
#include <QtCore/qlist.h>
#include <QtCore/qshareddata.h>

#include <memory>


QT_BEGIN_NAMESPACE
namespace QtProtobufPrivate::QtCore {
class QUrl;
using QUrlRepeated = QList<QUrl>;
namespace QUrl_QtProtobufNested {
enum class QtProtobufFieldEnum;
} // namespace QUrl_QtProtobufNested

class QChar;
using QCharRepeated = QList<QChar>;
namespace QChar_QtProtobufNested {
enum class QtProtobufFieldEnum;
} // namespace QChar_QtProtobufNested

class QUuid;
using QUuidRepeated = QList<QUuid>;
namespace QUuid_QtProtobufNested {
enum class QtProtobufFieldEnum;
} // namespace QUuid_QtProtobufNested

class QTimeZone;
using QTimeZoneRepeated = QList<QTimeZone>;
namespace QTimeZone_QtProtobufNested {
enum class QtProtobufFieldEnum;
enum TimeSpec : int32_t;
using TimeSpecRepeated = QList<TimeSpec>;
enum class TimeZoneFields;
} // namespace QTimeZone_QtProtobufNested

class QTime;
using QTimeRepeated = QList<QTime>;
namespace QTime_QtProtobufNested {
enum class QtProtobufFieldEnum;
} // namespace QTime_QtProtobufNested

class QDate;
using QDateRepeated = QList<QDate>;
namespace QDate_QtProtobufNested {
enum class QtProtobufFieldEnum;
} // namespace QDate_QtProtobufNested

class QDateTime;
using QDateTimeRepeated = QList<QDateTime>;
namespace QDateTime_QtProtobufNested {
enum class QtProtobufFieldEnum;
} // namespace QDateTime_QtProtobufNested

class QSize;
using QSizeRepeated = QList<QSize>;
namespace QSize_QtProtobufNested {
enum class QtProtobufFieldEnum;
} // namespace QSize_QtProtobufNested

class QSizeF;
using QSizeFRepeated = QList<QSizeF>;
namespace QSizeF_QtProtobufNested {
enum class QtProtobufFieldEnum;
} // namespace QSizeF_QtProtobufNested

class QPoint;
using QPointRepeated = QList<QPoint>;
namespace QPoint_QtProtobufNested {
enum class QtProtobufFieldEnum;
} // namespace QPoint_QtProtobufNested

class QPointF;
using QPointFRepeated = QList<QPointF>;
namespace QPointF_QtProtobufNested {
enum class QtProtobufFieldEnum;
} // namespace QPointF_QtProtobufNested

class QRect;
using QRectRepeated = QList<QRect>;
namespace QRect_QtProtobufNested {
enum class QtProtobufFieldEnum;
} // namespace QRect_QtProtobufNested

class QRectF;
using QRectFRepeated = QList<QRectF>;
namespace QRectF_QtProtobufNested {
enum class QtProtobufFieldEnum;
} // namespace QRectF_QtProtobufNested

class QVersionNumber;
using QVersionNumberRepeated = QList<QVersionNumber>;
namespace QVersionNumber_QtProtobufNested {
enum class QtProtobufFieldEnum;
} // namespace QVersionNumber_QtProtobufNested


class QUrl_QtProtobufData;
class QPB_PROTOBUFQTCORETYPES_EXPORT QUrl : public QProtobufMessage
{
    Q_GADGET
    Q_PROTOBUF_OBJECT
    Q_DECLARE_PROTOBUF_SERIALIZERS(QUrl)
    Q_PROPERTY(QString url READ url WRITE setUrl SCRIPTABLE true)

public:
    using QtProtobufFieldEnum = QUrl_QtProtobufNested::QtProtobufFieldEnum;
    QUrl();
    ~QUrl();
    QUrl(const QUrl &other);
    QUrl &operator =(const QUrl &other);
    QUrl(QUrl &&other) noexcept;
    QUrl &operator =(QUrl &&other) noexcept;
    bool operator ==(const QUrl &other) const;
    bool operator !=(const QUrl &other) const;

    QString url() const;
    void setUrl(const QString &url);
    static void registerTypes();

private:
    QExplicitlySharedDataPointer<QUrl_QtProtobufData> dptr;
};
namespace QUrl_QtProtobufNested {
Q_NAMESPACE_EXPORT(QPB_PROTOBUFQTCORETYPES_EXPORT)

enum class QtProtobufFieldEnum {
    UrlProtoFieldNumber = 1,
};
Q_ENUM_NS(QtProtobufFieldEnum)

} // namespace QUrl_QtProtobufNested

class QChar_QtProtobufData;
class QPB_PROTOBUFQTCORETYPES_EXPORT QChar : public QProtobufMessage
{
    Q_GADGET
    Q_PROTOBUF_OBJECT
    Q_DECLARE_PROTOBUF_SERIALIZERS(QChar)
    Q_PROPERTY(QtProtobuf::uint32 utf16CodePoint READ utf16CodePoint WRITE setUtf16CodePoint SCRIPTABLE true)

public:
    using QtProtobufFieldEnum = QChar_QtProtobufNested::QtProtobufFieldEnum;
    QChar();
    ~QChar();
    QChar(const QChar &other);
    QChar &operator =(const QChar &other);
    QChar(QChar &&other) noexcept;
    QChar &operator =(QChar &&other) noexcept;
    bool operator ==(const QChar &other) const;
    bool operator !=(const QChar &other) const;

    QtProtobuf::uint32 utf16CodePoint() const;
    void setUtf16CodePoint(const QtProtobuf::uint32 &utf16CodePoint);
    static void registerTypes();

private:
    QExplicitlySharedDataPointer<QChar_QtProtobufData> dptr;
};
namespace QChar_QtProtobufNested {
Q_NAMESPACE_EXPORT(QPB_PROTOBUFQTCORETYPES_EXPORT)

enum class QtProtobufFieldEnum {
    Utf16CodePointProtoFieldNumber = 1,
};
Q_ENUM_NS(QtProtobufFieldEnum)

} // namespace QChar_QtProtobufNested

class QUuid_QtProtobufData;
class QPB_PROTOBUFQTCORETYPES_EXPORT QUuid : public QProtobufMessage
{
    Q_GADGET
    Q_PROTOBUF_OBJECT
    Q_DECLARE_PROTOBUF_SERIALIZERS(QUuid)
    Q_PROPERTY(QByteArray rfc4122Uuid READ rfc4122Uuid WRITE setRfc4122Uuid SCRIPTABLE true)

public:
    using QtProtobufFieldEnum = QUuid_QtProtobufNested::QtProtobufFieldEnum;
    QUuid();
    ~QUuid();
    QUuid(const QUuid &other);
    QUuid &operator =(const QUuid &other);
    QUuid(QUuid &&other) noexcept;
    QUuid &operator =(QUuid &&other) noexcept;
    bool operator ==(const QUuid &other) const;
    bool operator !=(const QUuid &other) const;

    QByteArray rfc4122Uuid() const;
    void setRfc4122Uuid(const QByteArray &rfc4122Uuid);
    static void registerTypes();

private:
    QExplicitlySharedDataPointer<QUuid_QtProtobufData> dptr;
};
namespace QUuid_QtProtobufNested {
Q_NAMESPACE_EXPORT(QPB_PROTOBUFQTCORETYPES_EXPORT)

enum class QtProtobufFieldEnum {
    Rfc4122UuidProtoFieldNumber = 1,
};
Q_ENUM_NS(QtProtobufFieldEnum)

} // namespace QUuid_QtProtobufNested

class QTimeZone_QtProtobufData;
class QPB_PROTOBUFQTCORETYPES_EXPORT QTimeZone : public QProtobufMessage
{
    Q_GADGET
    Q_PROTOBUF_OBJECT
    Q_DECLARE_PROTOBUF_SERIALIZERS(QTimeZone)
    Q_PROPERTY(QtProtobuf::int32 offsetSeconds READ offsetSeconds_p WRITE setOffsetSeconds_p)
    Q_PROPERTY(bool hasOffsetSeconds READ hasOffsetSeconds)
    Q_PROPERTY(QByteArray ianaId READ ianaId_p WRITE setIanaId_p)
    Q_PROPERTY(bool hasIanaId READ hasIanaId)
    Q_PROPERTY(TimeSpec timeSpec READ timeSpec_p WRITE setTimeSpec_p)
    Q_PROPERTY(bool hasTimeSpec READ hasTimeSpec)

public:
    using QtProtobufFieldEnum = QTimeZone_QtProtobufNested::QtProtobufFieldEnum;
    using TimeSpec = QTimeZone_QtProtobufNested::TimeSpec;
    using TimeSpecRepeated = QList<TimeSpec>;
    using TimeZoneFields = QTimeZone_QtProtobufNested::TimeZoneFields;
    QTimeZone();
    ~QTimeZone();
    QTimeZone(const QTimeZone &other);
    QTimeZone &operator =(const QTimeZone &other);
    QTimeZone(QTimeZone &&other) noexcept;
    QTimeZone &operator =(QTimeZone &&other) noexcept;
    bool operator ==(const QTimeZone &other) const;
    bool operator !=(const QTimeZone &other) const;

    bool hasOffsetSeconds() const;
    QtProtobuf::int32 offsetSeconds() const;

    bool hasIanaId() const;
    QByteArray ianaId() const;

    bool hasTimeSpec() const;
    QTimeZone_QtProtobufNested::TimeSpec timeSpec() const;
    TimeZoneFields timeZoneField() const;
    void setOffsetSeconds(const QtProtobuf::int32 &offsetSeconds);
    void setIanaId(const QByteArray &ianaId);
    void setTimeSpec(const QTimeZone_QtProtobufNested::TimeSpec &timeSpec);
    void clearTimeZone();
    static void registerTypes();

private:
    QtProtobuf::int32 offsetSeconds_p() const;
    QByteArray ianaId_p() const;
    QTimeZone_QtProtobufNested::TimeSpec timeSpec_p() const;
    void setOffsetSeconds_p(QtProtobuf::int32 offsetSeconds);
    void setIanaId_p(QByteArray ianaId);
    void setTimeSpec_p(QTimeZone_QtProtobufNested::TimeSpec timeSpec);
    QExplicitlySharedDataPointer<QTimeZone_QtProtobufData> dptr;
};
namespace QTimeZone_QtProtobufNested {
Q_NAMESPACE_EXPORT(QPB_PROTOBUFQTCORETYPES_EXPORT)

enum class QtProtobufFieldEnum {
    OffsetSecondsProtoFieldNumber = 1,
    IanaIdProtoFieldNumber = 2,
    TimeSpecProtoFieldNumber = 3,
};
Q_ENUM_NS(QtProtobufFieldEnum)

enum TimeSpec : int32_t {
    LocalTime = 0,
    UTC = 1,
};
Q_ENUM_NS(TimeSpec)

using TimeSpecRepeated = QList<TimeSpec>;
enum class TimeZoneFields {
    UninitializedField = QtProtobuf::InvalidFieldNumber,
    OffsetSeconds = 1,
    IanaId = 2,
    TimeSpec = 3,
};
Q_ENUM_NS(TimeZoneFields)

} // namespace QTimeZone_QtProtobufNested

class QTime_QtProtobufData;
class QPB_PROTOBUFQTCORETYPES_EXPORT QTime : public QProtobufMessage
{
    Q_GADGET
    Q_PROTOBUF_OBJECT
    Q_DECLARE_PROTOBUF_SERIALIZERS(QTime)
    Q_PROPERTY(QtProtobuf::int32 millisecondsSinceMidnight READ millisecondsSinceMidnight WRITE setMillisecondsSinceMidnight SCRIPTABLE true)

public:
    using QtProtobufFieldEnum = QTime_QtProtobufNested::QtProtobufFieldEnum;
    QTime();
    ~QTime();
    QTime(const QTime &other);
    QTime &operator =(const QTime &other);
    QTime(QTime &&other) noexcept;
    QTime &operator =(QTime &&other) noexcept;
    bool operator ==(const QTime &other) const;
    bool operator !=(const QTime &other) const;

    QtProtobuf::int32 millisecondsSinceMidnight() const;
    void setMillisecondsSinceMidnight(const QtProtobuf::int32 &millisecondsSinceMidnight);
    static void registerTypes();

private:
    QExplicitlySharedDataPointer<QTime_QtProtobufData> dptr;
};
namespace QTime_QtProtobufNested {
Q_NAMESPACE_EXPORT(QPB_PROTOBUFQTCORETYPES_EXPORT)

enum class QtProtobufFieldEnum {
    MillisecondsSinceMidnightProtoFieldNumber = 1,
};
Q_ENUM_NS(QtProtobufFieldEnum)

} // namespace QTime_QtProtobufNested

class QDate_QtProtobufData;
class QPB_PROTOBUFQTCORETYPES_EXPORT QDate : public QProtobufMessage
{
    Q_GADGET
    Q_PROTOBUF_OBJECT
    Q_DECLARE_PROTOBUF_SERIALIZERS(QDate)
    Q_PROPERTY(QtProtobuf::int64 julianDay READ julianDay WRITE setJulianDay SCRIPTABLE false)

public:
    using QtProtobufFieldEnum = QDate_QtProtobufNested::QtProtobufFieldEnum;
    QDate();
    ~QDate();
    QDate(const QDate &other);
    QDate &operator =(const QDate &other);
    QDate(QDate &&other) noexcept;
    QDate &operator =(QDate &&other) noexcept;
    bool operator ==(const QDate &other) const;
    bool operator !=(const QDate &other) const;

    QtProtobuf::int64 julianDay() const;
    void setJulianDay(const QtProtobuf::int64 &julianDay);
    static void registerTypes();

private:
    QExplicitlySharedDataPointer<QDate_QtProtobufData> dptr;
};
namespace QDate_QtProtobufNested {
Q_NAMESPACE_EXPORT(QPB_PROTOBUFQTCORETYPES_EXPORT)

enum class QtProtobufFieldEnum {
    JulianDayProtoFieldNumber = 1,
};
Q_ENUM_NS(QtProtobufFieldEnum)

} // namespace QDate_QtProtobufNested

class QDateTime_QtProtobufData;
class QPB_PROTOBUFQTCORETYPES_EXPORT QDateTime : public QProtobufMessage
{
    Q_GADGET
    Q_PROTOBUF_OBJECT
    Q_DECLARE_PROTOBUF_SERIALIZERS(QDateTime)
    Q_PROPERTY(QtProtobuf::int64 utcMsecsSinceUnixEpoch READ utcMsecsSinceUnixEpoch WRITE setUtcMsecsSinceUnixEpoch SCRIPTABLE false)
    Q_PROPERTY(QtProtobufPrivate::QtCore::QTimeZone *timeZone_p READ timeZone_p WRITE setTimeZone_p SCRIPTABLE false)

public:
    using QtProtobufFieldEnum = QDateTime_QtProtobufNested::QtProtobufFieldEnum;
    QDateTime();
    ~QDateTime();
    QDateTime(const QDateTime &other);
    QDateTime &operator =(const QDateTime &other);
    QDateTime(QDateTime &&other) noexcept;
    QDateTime &operator =(QDateTime &&other) noexcept;
    bool operator ==(const QDateTime &other) const;
    bool operator !=(const QDateTime &other) const;

    QtProtobuf::int64 utcMsecsSinceUnixEpoch() const;

    bool hasTimeZone() const;
    QTimeZone &timeZone() const;
    void clearTimeZone();
    void setUtcMsecsSinceUnixEpoch(const QtProtobuf::int64 &utcMsecsSinceUnixEpoch);
    void setTimeZone(const QTimeZone &timeZone);
    static void registerTypes();

private:
    QTimeZone *timeZone_p() const;
    void setTimeZone_p(QTimeZone *timeZone);
    QExplicitlySharedDataPointer<QDateTime_QtProtobufData> dptr;
};
namespace QDateTime_QtProtobufNested {
Q_NAMESPACE_EXPORT(QPB_PROTOBUFQTCORETYPES_EXPORT)

enum class QtProtobufFieldEnum {
    UtcMsecsSinceUnixEpochProtoFieldNumber = 1,
    TimeZoneProtoFieldNumber = 2,
};
Q_ENUM_NS(QtProtobufFieldEnum)

} // namespace QDateTime_QtProtobufNested

class QSize_QtProtobufData;
class QPB_PROTOBUFQTCORETYPES_EXPORT QSize : public QProtobufMessage
{
    Q_GADGET
    Q_PROTOBUF_OBJECT
    Q_DECLARE_PROTOBUF_SERIALIZERS(QSize)
    Q_PROPERTY(QtProtobuf::int32 width READ width WRITE setWidth SCRIPTABLE true)
    Q_PROPERTY(QtProtobuf::int32 height READ height WRITE setHeight SCRIPTABLE true)

public:
    using QtProtobufFieldEnum = QSize_QtProtobufNested::QtProtobufFieldEnum;
    QSize();
    ~QSize();
    QSize(const QSize &other);
    QSize &operator =(const QSize &other);
    QSize(QSize &&other) noexcept;
    QSize &operator =(QSize &&other) noexcept;
    bool operator ==(const QSize &other) const;
    bool operator !=(const QSize &other) const;

    QtProtobuf::int32 width() const;

    QtProtobuf::int32 height() const;
    void setWidth(const QtProtobuf::int32 &width);
    void setHeight(const QtProtobuf::int32 &height);
    static void registerTypes();

private:
    QExplicitlySharedDataPointer<QSize_QtProtobufData> dptr;
};
namespace QSize_QtProtobufNested {
Q_NAMESPACE_EXPORT(QPB_PROTOBUFQTCORETYPES_EXPORT)

enum class QtProtobufFieldEnum {
    WidthProtoFieldNumber = 1,
    HeightProtoFieldNumber = 2,
};
Q_ENUM_NS(QtProtobufFieldEnum)

} // namespace QSize_QtProtobufNested

class QSizeF_QtProtobufData;
class QPB_PROTOBUFQTCORETYPES_EXPORT QSizeF : public QProtobufMessage
{
    Q_GADGET
    Q_PROTOBUF_OBJECT
    Q_DECLARE_PROTOBUF_SERIALIZERS(QSizeF)
    Q_PROPERTY(double width READ width WRITE setWidth SCRIPTABLE true)
    Q_PROPERTY(double height READ height WRITE setHeight SCRIPTABLE true)

public:
    using QtProtobufFieldEnum = QSizeF_QtProtobufNested::QtProtobufFieldEnum;
    QSizeF();
    ~QSizeF();
    QSizeF(const QSizeF &other);
    QSizeF &operator =(const QSizeF &other);
    QSizeF(QSizeF &&other) noexcept;
    QSizeF &operator =(QSizeF &&other) noexcept;
    bool operator ==(const QSizeF &other) const;
    bool operator !=(const QSizeF &other) const;

    double width() const;

    double height() const;
    void setWidth(const double &width);
    void setHeight(const double &height);
    static void registerTypes();

private:
    QExplicitlySharedDataPointer<QSizeF_QtProtobufData> dptr;
};
namespace QSizeF_QtProtobufNested {
Q_NAMESPACE_EXPORT(QPB_PROTOBUFQTCORETYPES_EXPORT)

enum class QtProtobufFieldEnum {
    WidthProtoFieldNumber = 1,
    HeightProtoFieldNumber = 2,
};
Q_ENUM_NS(QtProtobufFieldEnum)

} // namespace QSizeF_QtProtobufNested

class QPoint_QtProtobufData;
class QPB_PROTOBUFQTCORETYPES_EXPORT QPoint : public QProtobufMessage
{
    Q_GADGET
    Q_PROTOBUF_OBJECT
    Q_DECLARE_PROTOBUF_SERIALIZERS(QPoint)
    Q_PROPERTY(QtProtobuf::sint32 x READ x WRITE setX SCRIPTABLE true)
    Q_PROPERTY(QtProtobuf::sint32 y READ y WRITE setY SCRIPTABLE true)

public:
    using QtProtobufFieldEnum = QPoint_QtProtobufNested::QtProtobufFieldEnum;
    QPoint();
    ~QPoint();
    QPoint(const QPoint &other);
    QPoint &operator =(const QPoint &other);
    QPoint(QPoint &&other) noexcept;
    QPoint &operator =(QPoint &&other) noexcept;
    bool operator ==(const QPoint &other) const;
    bool operator !=(const QPoint &other) const;

    QtProtobuf::sint32 x() const;

    QtProtobuf::sint32 y() const;
    void setX(const QtProtobuf::sint32 &x);
    void setY(const QtProtobuf::sint32 &y);
    static void registerTypes();

private:
    QExplicitlySharedDataPointer<QPoint_QtProtobufData> dptr;
};
namespace QPoint_QtProtobufNested {
Q_NAMESPACE_EXPORT(QPB_PROTOBUFQTCORETYPES_EXPORT)

enum class QtProtobufFieldEnum {
    XProtoFieldNumber = 1,
    YProtoFieldNumber = 2,
};
Q_ENUM_NS(QtProtobufFieldEnum)

} // namespace QPoint_QtProtobufNested

class QPointF_QtProtobufData;
class QPB_PROTOBUFQTCORETYPES_EXPORT QPointF : public QProtobufMessage
{
    Q_GADGET
    Q_PROTOBUF_OBJECT
    Q_DECLARE_PROTOBUF_SERIALIZERS(QPointF)
    Q_PROPERTY(double x READ x WRITE setX SCRIPTABLE true)
    Q_PROPERTY(double y READ y WRITE setY SCRIPTABLE true)

public:
    using QtProtobufFieldEnum = QPointF_QtProtobufNested::QtProtobufFieldEnum;
    QPointF();
    ~QPointF();
    QPointF(const QPointF &other);
    QPointF &operator =(const QPointF &other);
    QPointF(QPointF &&other) noexcept;
    QPointF &operator =(QPointF &&other) noexcept;
    bool operator ==(const QPointF &other) const;
    bool operator !=(const QPointF &other) const;

    double x() const;

    double y() const;
    void setX(const double &x);
    void setY(const double &y);
    static void registerTypes();

private:
    QExplicitlySharedDataPointer<QPointF_QtProtobufData> dptr;
};
namespace QPointF_QtProtobufNested {
Q_NAMESPACE_EXPORT(QPB_PROTOBUFQTCORETYPES_EXPORT)

enum class QtProtobufFieldEnum {
    XProtoFieldNumber = 1,
    YProtoFieldNumber = 2,
};
Q_ENUM_NS(QtProtobufFieldEnum)

} // namespace QPointF_QtProtobufNested

class QRect_QtProtobufData;
class QPB_PROTOBUFQTCORETYPES_EXPORT QRect : public QProtobufMessage
{
    Q_GADGET
    Q_PROTOBUF_OBJECT
    Q_DECLARE_PROTOBUF_SERIALIZERS(QRect)
    Q_PROPERTY(QtProtobuf::sint32 x READ x WRITE setX SCRIPTABLE true)
    Q_PROPERTY(QtProtobuf::sint32 y READ y WRITE setY SCRIPTABLE true)
    Q_PROPERTY(QtProtobuf::int32 width READ width WRITE setWidth SCRIPTABLE true)
    Q_PROPERTY(QtProtobuf::int32 height READ height WRITE setHeight SCRIPTABLE true)

public:
    using QtProtobufFieldEnum = QRect_QtProtobufNested::QtProtobufFieldEnum;
    QRect();
    ~QRect();
    QRect(const QRect &other);
    QRect &operator =(const QRect &other);
    QRect(QRect &&other) noexcept;
    QRect &operator =(QRect &&other) noexcept;
    bool operator ==(const QRect &other) const;
    bool operator !=(const QRect &other) const;

    QtProtobuf::sint32 x() const;

    QtProtobuf::sint32 y() const;

    QtProtobuf::int32 width() const;

    QtProtobuf::int32 height() const;
    void setX(const QtProtobuf::sint32 &x);
    void setY(const QtProtobuf::sint32 &y);
    void setWidth(const QtProtobuf::int32 &width);
    void setHeight(const QtProtobuf::int32 &height);
    static void registerTypes();

private:
    QExplicitlySharedDataPointer<QRect_QtProtobufData> dptr;
};
namespace QRect_QtProtobufNested {
Q_NAMESPACE_EXPORT(QPB_PROTOBUFQTCORETYPES_EXPORT)

enum class QtProtobufFieldEnum {
    XProtoFieldNumber = 1,
    YProtoFieldNumber = 2,
    WidthProtoFieldNumber = 3,
    HeightProtoFieldNumber = 4,
};
Q_ENUM_NS(QtProtobufFieldEnum)

} // namespace QRect_QtProtobufNested

class QRectF_QtProtobufData;
class QPB_PROTOBUFQTCORETYPES_EXPORT QRectF : public QProtobufMessage
{
    Q_GADGET
    Q_PROTOBUF_OBJECT
    Q_DECLARE_PROTOBUF_SERIALIZERS(QRectF)
    Q_PROPERTY(double x READ x WRITE setX SCRIPTABLE true)
    Q_PROPERTY(double y READ y WRITE setY SCRIPTABLE true)
    Q_PROPERTY(double width READ width WRITE setWidth SCRIPTABLE true)
    Q_PROPERTY(double height READ height WRITE setHeight SCRIPTABLE true)

public:
    using QtProtobufFieldEnum = QRectF_QtProtobufNested::QtProtobufFieldEnum;
    QRectF();
    ~QRectF();
    QRectF(const QRectF &other);
    QRectF &operator =(const QRectF &other);
    QRectF(QRectF &&other) noexcept;
    QRectF &operator =(QRectF &&other) noexcept;
    bool operator ==(const QRectF &other) const;
    bool operator !=(const QRectF &other) const;

    double x() const;

    double y() const;

    double width() const;

    double height() const;
    void setX(const double &x);
    void setY(const double &y);
    void setWidth(const double &width);
    void setHeight(const double &height);
    static void registerTypes();

private:
    QExplicitlySharedDataPointer<QRectF_QtProtobufData> dptr;
};
namespace QRectF_QtProtobufNested {
Q_NAMESPACE_EXPORT(QPB_PROTOBUFQTCORETYPES_EXPORT)

enum class QtProtobufFieldEnum {
    XProtoFieldNumber = 1,
    YProtoFieldNumber = 2,
    WidthProtoFieldNumber = 3,
    HeightProtoFieldNumber = 4,
};
Q_ENUM_NS(QtProtobufFieldEnum)

} // namespace QRectF_QtProtobufNested

class QVersionNumber_QtProtobufData;
class QPB_PROTOBUFQTCORETYPES_EXPORT QVersionNumber : public QProtobufMessage
{
    Q_GADGET
    Q_PROTOBUF_OBJECT
    Q_DECLARE_PROTOBUF_SERIALIZERS(QVersionNumber)
    Q_PROPERTY(QtProtobuf::int32List segments READ segments WRITE setSegments SCRIPTABLE true)

public:
    using QtProtobufFieldEnum = QVersionNumber_QtProtobufNested::QtProtobufFieldEnum;
    QVersionNumber();
    ~QVersionNumber();
    QVersionNumber(const QVersionNumber &other);
    QVersionNumber &operator =(const QVersionNumber &other);
    QVersionNumber(QVersionNumber &&other) noexcept;
    QVersionNumber &operator =(QVersionNumber &&other) noexcept;
    bool operator ==(const QVersionNumber &other) const;
    bool operator !=(const QVersionNumber &other) const;

    QtProtobuf::int32List segments() const;
    QtProtobuf::int32List &segments();
    void setSegments(const QtProtobuf::int32List &segments);
    static void registerTypes();

private:
    QExplicitlySharedDataPointer<QVersionNumber_QtProtobufData> dptr;
};
namespace QVersionNumber_QtProtobufNested {
Q_NAMESPACE_EXPORT(QPB_PROTOBUFQTCORETYPES_EXPORT)

enum class QtProtobufFieldEnum {
    SegmentsProtoFieldNumber = 1,
};
Q_ENUM_NS(QtProtobufFieldEnum)

} // namespace QVersionNumber_QtProtobufNested
} // namespace QtProtobufPrivate::QtCore
QT_END_NAMESPACE

Q_DECLARE_METATYPE(QtProtobufPrivate::QtCore::QUrl)
Q_DECLARE_METATYPE(QtProtobufPrivate::QtCore::QChar)
Q_DECLARE_METATYPE(QtProtobufPrivate::QtCore::QUuid)
Q_DECLARE_METATYPE(QtProtobufPrivate::QtCore::QTimeZone)
Q_DECLARE_METATYPE(QtProtobufPrivate::QtCore::QTime)
Q_DECLARE_METATYPE(QtProtobufPrivate::QtCore::QDate)
Q_DECLARE_METATYPE(QtProtobufPrivate::QtCore::QDateTime)
Q_DECLARE_METATYPE(QtProtobufPrivate::QtCore::QSize)
Q_DECLARE_METATYPE(QtProtobufPrivate::QtCore::QSizeF)
Q_DECLARE_METATYPE(QtProtobufPrivate::QtCore::QPoint)
Q_DECLARE_METATYPE(QtProtobufPrivate::QtCore::QPointF)
Q_DECLARE_METATYPE(QtProtobufPrivate::QtCore::QRect)
Q_DECLARE_METATYPE(QtProtobufPrivate::QtCore::QRectF)
Q_DECLARE_METATYPE(QtProtobufPrivate::QtCore::QVersionNumber)
#endif // QPROTOBUF_QTCORE_H
