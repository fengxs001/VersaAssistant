#ifndef QTMATERIALRADIOBUTTON_H
#define QTMATERIALRADIOBUTTON_H

#include "lib/qtmaterialcheckable.h"
#include <lib/qtmaterialglobal.h>

class QtMaterialRadioButtonPrivate;

class MATERIAL_EXPORT QtMaterialRadioButton : public QtMaterialCheckable
{
Q_OBJECT

public:
	explicit QtMaterialRadioButton(QWidget *parent = 0);
	
	~QtMaterialRadioButton();

protected:
	void setupProperties();

private:
	Q_DISABLE_COPY(QtMaterialRadioButton)
	
	Q_DECLARE_PRIVATE(QtMaterialRadioButton)
};

#endif // QTMATERIALRADIOBUTTON_H
