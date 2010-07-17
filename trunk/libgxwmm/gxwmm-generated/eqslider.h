// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GXWMM_EQSLIDER_H
#define _GXWMM_EQSLIDER_H


#include <glibmm.h>

/*
 * Copyright (C) 2009, 2010 Hermann Meyer, James Warden, Andreas Degert
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#include <gxwmm/vslider.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GxEqSlider GxEqSlider;
typedef struct _GxEqSliderClass GxEqSliderClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gxw
{ class EqSlider_Class; } // namespace Gxw
namespace Gxw {


class EqSlider: public Gxw::VSlider {
	public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef EqSlider CppObjectType;
  typedef EqSlider_Class CppClassType;
  typedef GxEqSlider BaseObjectType;
  typedef GxEqSliderClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  virtual ~EqSlider();

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class EqSlider_Class;
  static CppClassType eqslider_class_;

  // noncopyable
  EqSlider(const EqSlider&);
  EqSlider& operator=(const EqSlider&);

protected:
  explicit EqSlider(const Glib::ConstructParams& construct_params);
  explicit EqSlider(GxEqSlider* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GxEqSlider*       gobj()       { return reinterpret_cast<GxEqSlider*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GxEqSlider* gobj() const { return reinterpret_cast<GxEqSlider*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:
#ifdef GLIBMM_VFUNCS_ENABLED
#endif //GLIBMM_VFUNCS_ENABLED

protected:
  //GTK+ Virtual Functions (override these to change behaviour):
#ifdef GLIBMM_VFUNCS_ENABLED
#endif //GLIBMM_VFUNCS_ENABLED

  //Default Signal Handlers::
#ifdef GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED


private:

	public:
	EqSlider();


};

} // namespace Gxw


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gxw::EqSlider
   */
  Gxw::EqSlider* wrap(GxEqSlider* object, bool take_copy = false);
} //namespace Glib


#endif /* _GXWMM_EQSLIDER_H */
