#ifndef QTMATERIALCHECKBOX_H
#define QTMATERIALCHECKBOX_H

#include "lib/qtmaterialcheckable.h"
#include "lib/qtmaterialtheme.h"
#include <lib/qtmaterialglobal.h>

class QtMaterialCheckBoxPrivate;

class MATERIAL_EXPORT QtMaterialCheckBox  :public QtMaterialCheckable
{
Q_OBJECT

public:
	explicit QtMaterialCheckBox(QWidget *parent = 0);
	
	~QtMaterialCheckBox();

private:
	Q_DISABLE_COPY(QtMaterialCheckBox)
	
	Q_DECLARE_PRIVATE(QtMaterialCheckBox)
};

#endif // QTMATERIALCHECKBOX_H
