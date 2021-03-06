/*
 * Copyright (C) 2012 Hermann Meyer, Andreas Degert, Pete Shorthose, Steve Poskitt
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
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 * --------------------------------------------------------------------------
 */

#pragma once

#ifndef SRC_HEADERS_WIDGET_H_
#define SRC_HEADERS_WIDGET_H_

#include <gtkmm.h>
#include <gxwmm.h>
#include "gxtape.h"
#include "../config.h" // for GX_STYLE_DIR
// LV2UI stuff
#include "lv2/lv2plug.in/ns/extensions/ui/ui.h"

class Widget : public Gtk::HBox
{
private:
  Gtk::Widget* get_controller_by_port(uint32_t port_index);

  void on_value_changed(uint32_t port_index);

  void make_controller_box(Gtk::Box *box,
                           Glib::ustring label,
                           float min, float max,
                           float digits,
                           PortIndex port_name);

  void make_selector(Glib::ustring label,
                     Glib::ustring tables[],
                     size_t _size,
                     float min, float digits,
                     PortIndex port_name);

  void make_switch_box(Gtk::Box *box,
                       Glib::ustring label,
                       Glib::ustring label2,
                       PortIndex port_name);
  void  make_image(Gtk::Box *box,Glib::ustring label, bool start );
  void make_label(Gtk::Box *box,Glib::ustring label, bool start  ) ;

  bool _expose_event(GdkEventExpose *event);

  void set_value(uint32_t port_index,
                 uint32_t format,
                 const void * buffer);
public:

  // public Lv2 communication stuff
  LV2UI_Controller controller;
  LV2UI_Write_Function write_function;
  static void set_value_static(uint32_t port_index,
                               uint32_t buffer_size,
                               uint32_t format,
                               const void * buffer, Widget *self)
  {
    self->set_value(port_index,format,buffer);
  }

  Widget(Glib::ustring plugname);
  ~Widget();

protected:
  Glib::ustring     plug_name;
  Gtk::VBox         m_vbox_;
  Gtk::VBox         m_vbox1_;
  Gtk::VBox         m_vbox2_;
  Gtk::VBox         m_vbox3_;
  Gtk::VBox         m_vbox4_;
  Gtk::VBox         m_vbox5_;
  Gtk::VBox         m_vbox6_;
  Gtk::VBox         m_vbox7_;
  Gtk::VBox         m_vbox8_;
  Gtk::VBox         m_vbox;
  Gtk::VBox         m_vbox1;
  Gtk::VBox         m_vbox2;
  Gtk::VBox         m_vbox3;
  Gtk::VBox         m_vbox4;
  Gtk::VBox         m_vbox5;
  Gtk::VBox         m_vbox6;
  Gtk::VBox         m_vbox7;
  Gtk::VBox         m_vbox8;
  Gtk::VBox         m_vbox9;
  Gtk::VBox         m_vbox10;
  Gtk::VBox         m_vbox11;
  Gtk::VBox         m_vbox12;

  Gtk::HBox         m_hbox_;
  Gtk::HBox         m_hbox1_;
  Gtk::HBox         m_hbox2_;
  Gtk::HBox         m_hbox3_;
  Gtk::HBox         m_hbox4_;
  Gtk::HBox         m_hbox5_;

  Gxw::PaintBox     m_paintbox;
  Gxw::BigKnob      m_bigknob;
  Gxw::BigKnob      m_bigknob1;
  Gxw::BigKnob      m_bigknob2;
  Gxw::BigKnob      m_bigknob3;
  Gxw::BigKnob      m_bigknob4;
  Gxw::BigKnob      m_bigknob5;
  Gxw::SmallKnobR    m_smallknob1;
  Gxw::SmallKnobR    m_smallknob2;
  Gxw::SmallKnobR    m_smallknob3;
  Gxw::SmallKnobR    m_smallknob4;
  Gxw::SmallKnobR    m_smallknob5;

  // This is cheat at present till I sort proper meter
  Gxw::SmallKnob    m_vumeter;
  Gxw::Switch       m_switch;
  Gxw::Switch       m_switch1;
  Gxw::Switch       m_switch2;
};

#endif //SRC_HEADERS_WIDGET_H_
