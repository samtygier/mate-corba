/*
 * matecorba-imodule.h:
 *
 * Copyright (C) 2002 Sun Microsystems, Inc.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 *
 * Authors:
 *	Mark McLoughlin <mark@skynet.ie>
 */
#ifndef __MATECORBA_IMODULE_H__
#define __MATECORBA_IMODULE_H__

#include <glib.h>
#include <matecorba/orb-core/matecorba-interface.h>
#include <libIDL/IDL.h>

#ifdef __cplusplus
extern "C" {
#endif

MateCORBA_IInterfaces *MateCORBA_iinterfaces_from_file (const char                     *path,
						const char                     *cpp_args,
						CORBA_sequence_CORBA_TypeCode **typecodes_ret);

MateCORBA_IInterfaces *MateCORBA_iinterfaces_from_tree (IDL_tree                        tree,
						CORBA_sequence_CORBA_TypeCode **typecodes_ret);

#ifdef __cplusplus
}
#endif

#endif /* __MATECORBA_IMODULE_H__ */
