/* Copyright 2018 Pedro Cuadra - pjcuadra@gmail.com
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/* WARNING: This file is automatically generated by raml2agl */
#include <service/ServiceRoverDisplay.h>
#include <roverapi/rover_display.hpp>
#include <roverapi/rover_api.hpp>

using namespace rover;

static RoverDisplay obj;
static RoverBase base;

ServiceRoverDisplay::ServiceRoverDisplay() {
  AFB_NOTICE("[ServiceRoverDisplay] Constructor ");
}

int ServiceRoverDisplay::init() {
  AFB_NOTICE("[ServiceRoverDisplay] Init ");

  base.initialize();
  obj.initialize();

  obj.clearDisplay();

  // obj.drawBitmap(0, 0, appstacle_logo, 128, 64, 1);

  obj.display();

  return 0;
}


/** Autogenrated doc for clear_display */
int ServiceRoverDisplay::clear_display() {
  AFB_NOTICE("[ServiceRoverDisplay] Clear_display");

  obj.clearDisplay();

  return 0;
}

/** Autogenrated doc for display */
int ServiceRoverDisplay::display() {
  AFB_NOTICE("[ServiceRoverDisplay] Display");

  obj.display();

  return 0;
}

/** Autogenrated doc for draw_bitmap */
int ServiceRoverDisplay::draw_bitmap(const int in_x_loc,
    const int in_y_loc,
    const int in_bitmap[], const int in_bitmap_size,
    const int in_w_size,
    const int in_h_size,
    const int in_color) {
  AFB_NOTICE("[ServiceRoverDisplay] Draw_bitmap");
  uint8_t * bitmap = new uint8_t[in_bitmap_size];

  for (int i = 0; i < in_bitmap_size; i++) {
    bitmap[i] = static_cast<uint8_t>(in_bitmap[i]);
  }

  obj.drawBitmap(in_x_loc, in_y_loc, bitmap, in_w_size, in_h_size, in_color);
  obj.display();

  return 0;
}

/** Autogenrated doc for draw_char */
int ServiceRoverDisplay::draw_char(const int in_x_loc,
    const int in_y_loc,
    const int in_character,
    const int in_color,
    const int in_bg_color,
    const int in_size) {

  AFB_NOTICE("[ServiceRoverDisplay] Draw_char");
  obj.drawChar(in_x_loc, in_y_loc, in_character, in_color, in_bg_color, in_size);

  return 0;
}

/** Autogenrated doc for draw_circle */
int ServiceRoverDisplay::draw_circle(const int in_x_loc,
    const int in_y_loc,
    const int in_r_size,
    const int in_color,
    const bool in_filled) {

  AFB_NOTICE("[ServiceRoverDisplay] Draw_circle");
  if (in_filled) {
    obj.fillCircle(in_x_loc, in_y_loc, in_r_size, in_color);
  } else {
    obj.drawCircle(in_x_loc, in_y_loc, in_r_size, in_color);
  }

  return 0;
}

/** Autogenrated doc for draw_line */
int ServiceRoverDisplay::draw_line(const int in_x1_loc,
    const int in_y1_loc,
    const int in_x2_loc,
    const int in_y2_loc,
    const int in_color) {
  AFB_NOTICE("[ServiceRoverDisplay] Draw_line");
  obj.drawLine(in_x1_loc, in_y1_loc, in_x2_loc, in_y2_loc, in_color);

  return 0;
}

/** Autogenrated doc for draw_pixel */
int ServiceRoverDisplay::draw_pixel(const int in_x_loc,
    const int in_y_loc,
    const int in_color) {
  AFB_NOTICE("[ServiceRoverDisplay] Draw_pixel");
  obj.drawPixel(in_x_loc, in_y_loc, in_color);

  return 0;
}

/** Autogenrated doc for draw_rectangle */
int ServiceRoverDisplay::draw_rectangle(const int in_x_loc,
    const int in_y_loc,
    const int in_w_size,
    const int in_h_size,
    const int in_color,
    const bool in_filled) {
  AFB_NOTICE("[ServiceRoverDisplay] Draw_rectangle");
  if (in_filled) {
    // obj.fillCircle(in_x_loc, in_y_loc, in_r_size, in_color);
  } else {
    obj.drawRect(in_x_loc, in_y_loc, in_w_size, in_h_size, in_color);
  }

  return 0;
}

/** Autogenrated doc for draw_round_rectangle */
int ServiceRoverDisplay::draw_round_rectangle(const int in_x_loc,
    const int in_y_loc,
    const int in_w_size,
    const int in_h_size,
    const int in_r_size,
    const int in_color,
    const bool in_filled) {

  AFB_NOTICE("[ServiceRoverDisplay] Draw_round_rectangle");
  if (in_filled) {
    obj.fillRoundRect(in_x_loc, in_y_loc, in_w_size, in_h_size, in_r_size, in_color);
  } else {
    obj.drawRoundRect(in_x_loc, in_y_loc, in_w_size, in_h_size, in_r_size, in_color);
  }

  return 0;
}

/** Autogenrated doc for draw_triangle */
int ServiceRoverDisplay::draw_triangle(const int in_x1_loc,
    const int in_y1_loc,
    const int in_x2_loc,
    const int in_y2_loc,
    const int in_x3_loc,
    const int in_y3_loc,
    const int in_color,
    const bool in_filled) {

  AFB_NOTICE("[ServiceRoverDisplay] Draw_triangle");
  if (in_filled) {
    obj.fillTriangle (in_x1_loc, in_y1_loc, in_x2_loc, in_y2_loc, in_x3_loc, in_y3_loc, in_color);
  } else {
    obj.drawTriangle(in_x1_loc, in_y1_loc, in_x2_loc, in_y2_loc, in_x3_loc, in_y3_loc, in_color);
  }


  return 0;
}

/** Autogenrated doc for fill_screen */
int ServiceRoverDisplay::fill_screen(const int in_color) {
  AFB_NOTICE("[ServiceRoverDisplay] Fill_screen");

  obj.fillScreen(in_color);

  return 0;
}

/** Autogenrated doc for get_height */
int ServiceRoverDisplay::get_height(int &out_height) {
  AFB_NOTICE("[ServiceRoverDisplay] Get_height");

  out_height = obj.height();

  return 0;
}

/** Autogenrated doc for get_width */
int ServiceRoverDisplay::get_width(int &out_width) {
  AFB_NOTICE("[ServiceRoverDisplay] Get_width");

  out_width = obj.width();

  return 0;
}

/** Autogenrated doc for invert_display */
int ServiceRoverDisplay::invert_display(const bool in_inv) {
  AFB_NOTICE("[ServiceRoverDisplay] Invert_display");
  obj.invertDisplay(in_inv);

  return 0;
}

/** Autogenrated doc for print */
int ServiceRoverDisplay::print(const std::string in_text) {
  AFB_NOTICE("[ServiceRoverDisplay] Print");
  obj.print(in_text.c_str());

  return 0;
}

/** Autogenrated doc for set_cursor */
int ServiceRoverDisplay::set_cursor(const int in_x_loc,
    const int in_y_loc) {
  AFB_NOTICE("[ServiceRoverDisplay] Set_cursor");
  obj.setCursor(in_x_loc, in_y_loc);

  return 0;
}

/** Autogenrated doc for set_rotation */
int ServiceRoverDisplay::set_rotation(const int in_rot) {
  AFB_NOTICE("[ServiceRoverDisplay] Set_rotation");
  obj.setRotation(in_rot);

  return 0;
}

/** Autogenrated doc for set_text_color */
int ServiceRoverDisplay::set_text_color(const int in_color) {
  AFB_NOTICE("[ServiceRoverDisplay] Set_text_color");
  obj.setTextColor(in_color);

  return 0;
}

/** Autogenrated doc for set_text_size */
int ServiceRoverDisplay::set_text_size(const int in_size) {
  AFB_NOTICE("[ServiceRoverDisplay] Set_text_size");
  obj.setTextSize(in_size);

  return 0;
}
