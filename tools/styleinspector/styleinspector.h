#ifndef GAMMARAY_STYLEINSPECTOR_H
#define GAMMARAY_STYLEINSPECTOR_H

#include <toolfactory.h>

#include <qstyle.h>
#include <qwidget.h>

namespace GammaRay {

namespace Ui {
class StyleInspector;
}

class StyleInspector : public QWidget
{
  Q_OBJECT
public:
  explicit StyleInspector(ProbeInterface *probe, QWidget *parent = 0);
  virtual ~StyleInspector();

private:
  Ui::StyleInspector *ui;
};

class StyleInspectorFactory : public QObject, public StandardToolFactory<QStyle, StyleInspector>
{
  Q_OBJECT
  Q_INTERFACES(GammaRay::ToolFactory)

public:
  explicit StyleInspectorFactory(QObject* parent = 0) : QObject(parent) {}
  virtual QString name() const { return tr("Style"); }
};

}

#endif // GAMMARAY_STYLEINSPECTOR_H
