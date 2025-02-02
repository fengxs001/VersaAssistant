#include "qtmaterialprogress_internal.h"
#include <lib/qtmaterialglobal.h>

/*!
 *  \class MATERIAL_EXPORT QtMaterialProgressDelegate
 *  \internal
 */

QtMaterialProgressDelegate::QtMaterialProgressDelegate(QtMaterialProgress *parent)
		: QObject(parent),
		  m_progress(parent),
		  m_offset(0)
{
	Q_ASSERT(parent);
}

QtMaterialProgressDelegate::~QtMaterialProgressDelegate()
{
}
