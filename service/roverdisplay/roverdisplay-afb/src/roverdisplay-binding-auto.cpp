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
extern "C"
{
   #define AFB_BINDING_VERSION 2
   #include <afb/afb-binding.h>
};


#include <cstddef>
#include <cstdio>
#include <cstring>

#include <json-c/json.h>

#include <service/ServiceRoverDisplay.h>
// #include <all_types.h>

static ServiceRoverDisplay obj;

static int init()
{
  int rc = 0;
	AFB_NOTICE("Initializing... ");
  rc = obj.init();
	AFB_NOTICE("Initialization done!");
	return rc;
}

static void clear_display(struct afb_req request) {
  json_object *args = afb_req_json(request);
  int ret = 0;

  AFB_NOTICE("[roverdisplay] Calling clear_display");


  if (args) {
    // Parse args if possible


  }


  ret = obj.clear_display();
  if (ret) {
    AFB_ERROR("[roverdisplay] Verb 'clear_display' returning error");
    afb_req_fail_f(request, "bad-request", "Verb 'clear_display' returning error %d", ret);
    return;
  }



  afb_req_success(request, args, NULL);

}

static void get_height(struct afb_req request) {
  json_object *args = afb_req_json(request);
  int _var_height = static_cast<int>(0);
  json_object * new_json = json_object_new_object();
  json_object * new_sub_json = NULL;
  int ret = 0;

  AFB_NOTICE("[roverdisplay] Calling get_height");


  if (args) {
    // Parse args if possible


  }


  ret = obj.get_height(_var_height);
  if (ret) {
    AFB_ERROR("[roverdisplay] Verb 'get_height' returning error");
    afb_req_fail_f(request, "bad-request", "Verb 'get_height' returning error %d", ret);
    return;
  }


  new_sub_json = json_object_new_int(_var_height);
  json_object_object_add(new_json, "height", new_sub_json);

  afb_req_success(request, new_json, NULL);
  // Release the request json object
  json_object_put(new_json);

}

static void set_rotation(struct afb_req request) {
  json_object *args = afb_req_json(request);
  json_object *val[1];
  int ret = 0;

  AFB_NOTICE("[roverdisplay] Calling set_rotation");


  if (args) {
    // Parse args if possible
    if (!json_object_object_get_ex(args, "rot", &val[0])) {
      AFB_ERROR("[roverdisplay] No 'rot' param provided");
      afb_req_fail(request, "bad-request", "No 'rot' param provided");
      return;
    }


  }


  ret = obj.set_rotation(static_cast<int>(json_object_get_int(val[0])));
  if (ret) {
    AFB_ERROR("[roverdisplay] Verb 'set_rotation' returning error");
    afb_req_fail_f(request, "bad-request", "Verb 'set_rotation' returning error %d", ret);
    return;
  }



  afb_req_success(request, args, NULL);

}

static void draw_round_rectangle(struct afb_req request) {
  json_object *args = afb_req_json(request);
  json_object *val[7];
  int ret = 0;

  AFB_NOTICE("[roverdisplay] Calling draw_round_rectangle");


  if (args) {
    // Parse args if possible
    if (!json_object_object_get_ex(args, "x_loc", &val[0])) {
      AFB_ERROR("[roverdisplay] No 'x_loc' param provided");
      afb_req_fail(request, "bad-request", "No 'x_loc' param provided");
      return;
    }
    if (!json_object_object_get_ex(args, "y_loc", &val[1])) {
      AFB_ERROR("[roverdisplay] No 'y_loc' param provided");
      afb_req_fail(request, "bad-request", "No 'y_loc' param provided");
      return;
    }
    if (!json_object_object_get_ex(args, "w_size", &val[2])) {
      AFB_ERROR("[roverdisplay] No 'w_size' param provided");
      afb_req_fail(request, "bad-request", "No 'w_size' param provided");
      return;
    }
    if (!json_object_object_get_ex(args, "h_size", &val[3])) {
      AFB_ERROR("[roverdisplay] No 'h_size' param provided");
      afb_req_fail(request, "bad-request", "No 'h_size' param provided");
      return;
    }
    if (!json_object_object_get_ex(args, "r_size", &val[4])) {
      AFB_ERROR("[roverdisplay] No 'r_size' param provided");
      afb_req_fail(request, "bad-request", "No 'r_size' param provided");
      return;
    }
    if (!json_object_object_get_ex(args, "color", &val[5])) {
      AFB_ERROR("[roverdisplay] No 'color' param provided");
      afb_req_fail(request, "bad-request", "No 'color' param provided");
      return;
    }
    if (!json_object_object_get_ex(args, "filled", &val[6])) {
      AFB_ERROR("[roverdisplay] No 'filled' param provided");
      afb_req_fail(request, "bad-request", "No 'filled' param provided");
      return;
    }


  }


  ret = obj.draw_round_rectangle(static_cast<int>(json_object_get_int(val[0])),
      static_cast<int>(json_object_get_int(val[1])),
      static_cast<int>(json_object_get_int(val[2])),
      static_cast<int>(json_object_get_int(val[3])),
      static_cast<int>(json_object_get_int(val[4])),
      static_cast<int>(json_object_get_int(val[5])),
      static_cast<bool>(json_object_get_boolean(val[6])));
  if (ret) {
    AFB_ERROR("[roverdisplay] Verb 'draw_round_rectangle' returning error");
    afb_req_fail_f(request, "bad-request", "Verb 'draw_round_rectangle' returning error %d", ret);
    return;
  }



  afb_req_success(request, args, NULL);

}

static void draw_line(struct afb_req request) {
  json_object *args = afb_req_json(request);
  json_object *val[5];
  int ret = 0;

  AFB_NOTICE("[roverdisplay] Calling draw_line");


  if (args) {
    // Parse args if possible
    if (!json_object_object_get_ex(args, "x1_loc", &val[0])) {
      AFB_ERROR("[roverdisplay] No 'x1_loc' param provided");
      afb_req_fail(request, "bad-request", "No 'x1_loc' param provided");
      return;
    }
    if (!json_object_object_get_ex(args, "y1_loc", &val[1])) {
      AFB_ERROR("[roverdisplay] No 'y1_loc' param provided");
      afb_req_fail(request, "bad-request", "No 'y1_loc' param provided");
      return;
    }
    if (!json_object_object_get_ex(args, "x2_loc", &val[2])) {
      AFB_ERROR("[roverdisplay] No 'x2_loc' param provided");
      afb_req_fail(request, "bad-request", "No 'x2_loc' param provided");
      return;
    }
    if (!json_object_object_get_ex(args, "y2_loc", &val[3])) {
      AFB_ERROR("[roverdisplay] No 'y2_loc' param provided");
      afb_req_fail(request, "bad-request", "No 'y2_loc' param provided");
      return;
    }
    if (!json_object_object_get_ex(args, "color", &val[4])) {
      AFB_ERROR("[roverdisplay] No 'color' param provided");
      afb_req_fail(request, "bad-request", "No 'color' param provided");
      return;
    }


  }


  ret = obj.draw_line(static_cast<int>(json_object_get_int(val[0])),
      static_cast<int>(json_object_get_int(val[1])),
      static_cast<int>(json_object_get_int(val[2])),
      static_cast<int>(json_object_get_int(val[3])),
      static_cast<int>(json_object_get_int(val[4])));
  if (ret) {
    AFB_ERROR("[roverdisplay] Verb 'draw_line' returning error");
    afb_req_fail_f(request, "bad-request", "Verb 'draw_line' returning error %d", ret);
    return;
  }



  afb_req_success(request, args, NULL);

}

static void draw_bitmap(struct afb_req request) {
  json_object *args = afb_req_json(request);
  json_object *val[6];
  json_object *val_bitmap_size_obj = NULL;
  int _var_bitmap_size = 0;
  int * _var_bitmap = nullptr;
  int ret = 0;

  AFB_NOTICE("[roverdisplay] Calling draw_bitmap");


  if (args) {
    // Parse args if possible
    if (!json_object_object_get_ex(args, "x_loc", &val[0])) {
      AFB_ERROR("[roverdisplay] No 'x_loc' param provided");
      afb_req_fail(request, "bad-request", "No 'x_loc' param provided");
      return;
    }
    if (!json_object_object_get_ex(args, "y_loc", &val[1])) {
      AFB_ERROR("[roverdisplay] No 'y_loc' param provided");
      afb_req_fail(request, "bad-request", "No 'y_loc' param provided");
      return;
    }
    if (!json_object_object_get_ex(args, "bitmap", &val[2])) {
      AFB_ERROR("[roverdisplay] No 'bitmap' param provided");
      afb_req_fail(request, "bad-request", "No 'bitmap' param provided");
      return;
    }
    if (!json_object_object_get_ex(args, "bitmap_size", &val_bitmap_size_obj)) {
      AFB_ERROR("[roverdisplay] No 'bitmap_size' param provided");
      afb_req_fail(request, "bad-request", "No 'bitmap_size' param provided");
      return;
    }

    _var_bitmap_size = json_object_get_int(val_bitmap_size_obj);

    _var_bitmap = new int[_var_bitmap_size];

    for (int i = 0; i < _var_bitmap_size; i++) {
      _var_bitmap[i] = static_cast<int>(json_object_get_int(json_object_array_get_idx(val[2], i)));
    }

    if (!json_object_object_get_ex(args, "w_size", &val[3])) {
      AFB_ERROR("[roverdisplay] No 'w_size' param provided");
      afb_req_fail(request, "bad-request", "No 'w_size' param provided");
      return;
    }
    if (!json_object_object_get_ex(args, "h_size", &val[4])) {
      AFB_ERROR("[roverdisplay] No 'h_size' param provided");
      afb_req_fail(request, "bad-request", "No 'h_size' param provided");
      return;
    }
    if (!json_object_object_get_ex(args, "color", &val[5])) {
      AFB_ERROR("[roverdisplay] No 'color' param provided");
      afb_req_fail(request, "bad-request", "No 'color' param provided");
      return;
    }


  }

  ret = obj.draw_bitmap(static_cast<int>(json_object_get_int(val[0])),
      static_cast<int>(json_object_get_int(val[1])),
      _var_bitmap, _var_bitmap_size,
      static_cast<int>(json_object_get_int(val[3])),
      static_cast<int>(json_object_get_int(val[4])),
      static_cast<int>(json_object_get_int(val[5])));
  if (ret) {
    AFB_ERROR("[roverdisplay] Verb 'draw_bitmap' returning error");
    afb_req_fail_f(request, "bad-request", "Verb 'draw_bitmap' returning error %d", ret);
    return;
  }

  delete [] _var_bitmap;


  afb_req_success(request, args, NULL);

}

static void set_text_color(struct afb_req request) {
  json_object *args = afb_req_json(request);
  json_object *val[1];
  int ret = 0;

  AFB_NOTICE("[roverdisplay] Calling set_text_color");


  if (args) {
    // Parse args if possible
    if (!json_object_object_get_ex(args, "color", &val[0])) {
      AFB_ERROR("[roverdisplay] No 'color' param provided");
      afb_req_fail(request, "bad-request", "No 'color' param provided");
      return;
    }


  }


  ret = obj.set_text_color(static_cast<int>(json_object_get_int(val[0])));
  if (ret) {
    AFB_ERROR("[roverdisplay] Verb 'set_text_color' returning error");
    afb_req_fail_f(request, "bad-request", "Verb 'set_text_color' returning error %d", ret);
    return;
  }



  afb_req_success(request, args, NULL);

}

static void get_width(struct afb_req request) {
  json_object *args = afb_req_json(request);
  int _var_width = static_cast<int>(0);
  json_object * new_json = json_object_new_object();
  json_object * new_sub_json = NULL;
  int ret = 0;

  AFB_NOTICE("[roverdisplay] Calling get_width");


  if (args) {
    // Parse args if possible


  }


  ret = obj.get_width(_var_width);
  if (ret) {
    AFB_ERROR("[roverdisplay] Verb 'get_width' returning error");
    afb_req_fail_f(request, "bad-request", "Verb 'get_width' returning error %d", ret);
    return;
  }


  new_sub_json = json_object_new_int(_var_width);
  json_object_object_add(new_json, "width", new_sub_json);

  afb_req_success(request, new_json, NULL);
  // Release the request json object
  json_object_put(new_json);

}

static void draw_rectangle(struct afb_req request) {
  json_object *args = afb_req_json(request);
  json_object *val[6];
  int ret = 0;

  AFB_NOTICE("[roverdisplay] Calling draw_rectangle");


  if (args) {
    // Parse args if possible
    if (!json_object_object_get_ex(args, "x_loc", &val[0])) {
      AFB_ERROR("[roverdisplay] No 'x_loc' param provided");
      afb_req_fail(request, "bad-request", "No 'x_loc' param provided");
      return;
    }
    if (!json_object_object_get_ex(args, "y_loc", &val[1])) {
      AFB_ERROR("[roverdisplay] No 'y_loc' param provided");
      afb_req_fail(request, "bad-request", "No 'y_loc' param provided");
      return;
    }
    if (!json_object_object_get_ex(args, "w_size", &val[2])) {
      AFB_ERROR("[roverdisplay] No 'w_size' param provided");
      afb_req_fail(request, "bad-request", "No 'w_size' param provided");
      return;
    }
    if (!json_object_object_get_ex(args, "h_size", &val[3])) {
      AFB_ERROR("[roverdisplay] No 'h_size' param provided");
      afb_req_fail(request, "bad-request", "No 'h_size' param provided");
      return;
    }
    if (!json_object_object_get_ex(args, "color", &val[4])) {
      AFB_ERROR("[roverdisplay] No 'color' param provided");
      afb_req_fail(request, "bad-request", "No 'color' param provided");
      return;
    }
    if (!json_object_object_get_ex(args, "filled", &val[5])) {
      AFB_ERROR("[roverdisplay] No 'filled' param provided");
      afb_req_fail(request, "bad-request", "No 'filled' param provided");
      return;
    }


  }


  ret = obj.draw_rectangle(static_cast<int>(json_object_get_int(val[0])),
      static_cast<int>(json_object_get_int(val[1])),
      static_cast<int>(json_object_get_int(val[2])),
      static_cast<int>(json_object_get_int(val[3])),
      static_cast<int>(json_object_get_int(val[4])),
      static_cast<bool>(json_object_get_boolean(val[5])));
  if (ret) {
    AFB_ERROR("[roverdisplay] Verb 'draw_rectangle' returning error");
    afb_req_fail_f(request, "bad-request", "Verb 'draw_rectangle' returning error %d", ret);
    return;
  }



  afb_req_success(request, args, NULL);

}

static void set_text_size(struct afb_req request) {
  json_object *args = afb_req_json(request);
  json_object *val[1];
  int ret = 0;

  AFB_NOTICE("[roverdisplay] Calling set_text_size");


  if (args) {
    // Parse args if possible
    if (!json_object_object_get_ex(args, "size", &val[0])) {
      AFB_ERROR("[roverdisplay] No 'size' param provided");
      afb_req_fail(request, "bad-request", "No 'size' param provided");
      return;
    }


  }


  ret = obj.set_text_size(static_cast<int>(json_object_get_int(val[0])));
  if (ret) {
    AFB_ERROR("[roverdisplay] Verb 'set_text_size' returning error");
    afb_req_fail_f(request, "bad-request", "Verb 'set_text_size' returning error %d", ret);
    return;
  }



  afb_req_success(request, args, NULL);

}

static void draw_triangle(struct afb_req request) {
  json_object *args = afb_req_json(request);
  json_object *val[8];
  int ret = 0;

  AFB_NOTICE("[roverdisplay] Calling draw_triangle");


  if (args) {
    // Parse args if possible
    if (!json_object_object_get_ex(args, "x1_loc", &val[0])) {
      AFB_ERROR("[roverdisplay] No 'x1_loc' param provided");
      afb_req_fail(request, "bad-request", "No 'x1_loc' param provided");
      return;
    }
    if (!json_object_object_get_ex(args, "y1_loc", &val[1])) {
      AFB_ERROR("[roverdisplay] No 'y1_loc' param provided");
      afb_req_fail(request, "bad-request", "No 'y1_loc' param provided");
      return;
    }
    if (!json_object_object_get_ex(args, "x2_loc", &val[2])) {
      AFB_ERROR("[roverdisplay] No 'x2_loc' param provided");
      afb_req_fail(request, "bad-request", "No 'x2_loc' param provided");
      return;
    }
    if (!json_object_object_get_ex(args, "y2_loc", &val[3])) {
      AFB_ERROR("[roverdisplay] No 'y2_loc' param provided");
      afb_req_fail(request, "bad-request", "No 'y2_loc' param provided");
      return;
    }
    if (!json_object_object_get_ex(args, "x3_loc", &val[4])) {
      AFB_ERROR("[roverdisplay] No 'x3_loc' param provided");
      afb_req_fail(request, "bad-request", "No 'x3_loc' param provided");
      return;
    }
    if (!json_object_object_get_ex(args, "y3_loc", &val[5])) {
      AFB_ERROR("[roverdisplay] No 'y3_loc' param provided");
      afb_req_fail(request, "bad-request", "No 'y3_loc' param provided");
      return;
    }
    if (!json_object_object_get_ex(args, "color", &val[6])) {
      AFB_ERROR("[roverdisplay] No 'color' param provided");
      afb_req_fail(request, "bad-request", "No 'color' param provided");
      return;
    }
    if (!json_object_object_get_ex(args, "filled", &val[7])) {
      AFB_ERROR("[roverdisplay] No 'filled' param provided");
      afb_req_fail(request, "bad-request", "No 'filled' param provided");
      return;
    }


  }


  ret = obj.draw_triangle(static_cast<int>(json_object_get_int(val[0])),
      static_cast<int>(json_object_get_int(val[1])),
      static_cast<int>(json_object_get_int(val[2])),
      static_cast<int>(json_object_get_int(val[3])),
      static_cast<int>(json_object_get_int(val[4])),
      static_cast<int>(json_object_get_int(val[5])),
      static_cast<int>(json_object_get_int(val[6])),
      static_cast<bool>(json_object_get_boolean(val[7])));
  if (ret) {
    AFB_ERROR("[roverdisplay] Verb 'draw_triangle' returning error");
    afb_req_fail_f(request, "bad-request", "Verb 'draw_triangle' returning error %d", ret);
    return;
  }



  afb_req_success(request, args, NULL);

}

static void draw_pixel(struct afb_req request) {
  json_object *args = afb_req_json(request);
  json_object *val[3];
  int ret = 0;

  AFB_NOTICE("[roverdisplay] Calling draw_pixel");


  if (args) {
    // Parse args if possible
    if (!json_object_object_get_ex(args, "x_loc", &val[0])) {
      AFB_ERROR("[roverdisplay] No 'x_loc' param provided");
      afb_req_fail(request, "bad-request", "No 'x_loc' param provided");
      return;
    }
    if (!json_object_object_get_ex(args, "y_loc", &val[1])) {
      AFB_ERROR("[roverdisplay] No 'y_loc' param provided");
      afb_req_fail(request, "bad-request", "No 'y_loc' param provided");
      return;
    }
    if (!json_object_object_get_ex(args, "color", &val[2])) {
      AFB_ERROR("[roverdisplay] No 'color' param provided");
      afb_req_fail(request, "bad-request", "No 'color' param provided");
      return;
    }


  }


  ret = obj.draw_pixel(static_cast<int>(json_object_get_int(val[0])),
      static_cast<int>(json_object_get_int(val[1])),
      static_cast<int>(json_object_get_int(val[2])));
  if (ret) {
    AFB_ERROR("[roverdisplay] Verb 'draw_pixel' returning error");
    afb_req_fail_f(request, "bad-request", "Verb 'draw_pixel' returning error %d", ret);
    return;
  }



  afb_req_success(request, args, NULL);

}

static void set_cursor(struct afb_req request) {
  json_object *args = afb_req_json(request);
  json_object *val[2];
  int ret = 0;

  AFB_NOTICE("[roverdisplay] Calling set_cursor");


  if (args) {
    // Parse args if possible
    if (!json_object_object_get_ex(args, "x_loc", &val[0])) {
      AFB_ERROR("[roverdisplay] No 'x_loc' param provided");
      afb_req_fail(request, "bad-request", "No 'x_loc' param provided");
      return;
    }
    if (!json_object_object_get_ex(args, "y_loc", &val[1])) {
      AFB_ERROR("[roverdisplay] No 'y_loc' param provided");
      afb_req_fail(request, "bad-request", "No 'y_loc' param provided");
      return;
    }


  }


  ret = obj.set_cursor(static_cast<int>(json_object_get_int(val[0])),
      static_cast<int>(json_object_get_int(val[1])));
  if (ret) {
    AFB_ERROR("[roverdisplay] Verb 'set_cursor' returning error");
    afb_req_fail_f(request, "bad-request", "Verb 'set_cursor' returning error %d", ret);
    return;
  }



  afb_req_success(request, args, NULL);

}

static void print(struct afb_req request) {
  json_object *args = afb_req_json(request);
  json_object *val[1];
  int ret = 0;

  AFB_NOTICE("[roverdisplay] Calling print");


  if (args) {
    // Parse args if possible
    if (!json_object_object_get_ex(args, "text", &val[0])) {
      AFB_ERROR("[roverdisplay] No 'text' param provided");
      afb_req_fail(request, "bad-request", "No 'text' param provided");
      return;
    }


  }


  ret = obj.print(static_cast<const char *>(json_object_get_string(val[0])));
  if (ret) {
    AFB_ERROR("[roverdisplay] Verb 'print' returning error");
    afb_req_fail_f(request, "bad-request", "Verb 'print' returning error %d", ret);
    return;
  }



  afb_req_success(request, args, NULL);

}

static void fill_screen(struct afb_req request) {
  json_object *args = afb_req_json(request);
  json_object *val[1];
  int ret = 0;

  AFB_NOTICE("[roverdisplay] Calling fill_screen");


  if (args) {
    // Parse args if possible
    if (!json_object_object_get_ex(args, "color", &val[0])) {
      AFB_ERROR("[roverdisplay] No 'color' param provided");
      afb_req_fail(request, "bad-request", "No 'color' param provided");
      return;
    }


  }


  ret = obj.fill_screen(static_cast<int>(json_object_get_int(val[0])));
  if (ret) {
    AFB_ERROR("[roverdisplay] Verb 'fill_screen' returning error");
    afb_req_fail_f(request, "bad-request", "Verb 'fill_screen' returning error %d", ret);
    return;
  }



  afb_req_success(request, args, NULL);

}

static void invert_display(struct afb_req request) {
  json_object *args = afb_req_json(request);
  json_object *val[1];
  int ret = 0;

  AFB_NOTICE("[roverdisplay] Calling invert_display");


  if (args) {
    // Parse args if possible
    if (!json_object_object_get_ex(args, "inv", &val[0])) {
      AFB_ERROR("[roverdisplay] No 'inv' param provided");
      afb_req_fail(request, "bad-request", "No 'inv' param provided");
      return;
    }


  }


  ret = obj.invert_display(static_cast<bool>(json_object_get_boolean(val[0])));
  if (ret) {
    AFB_ERROR("[roverdisplay] Verb 'invert_display' returning error");
    afb_req_fail_f(request, "bad-request", "Verb 'invert_display' returning error %d", ret);
    return;
  }



  afb_req_success(request, args, NULL);

}

static void draw_char(struct afb_req request) {
  json_object *args = afb_req_json(request);
  json_object *val[6];
  int ret = 0;

  AFB_NOTICE("[roverdisplay] Calling draw_char");


  if (args) {
    // Parse args if possible
    if (!json_object_object_get_ex(args, "x_loc", &val[0])) {
      AFB_ERROR("[roverdisplay] No 'x_loc' param provided");
      afb_req_fail(request, "bad-request", "No 'x_loc' param provided");
      return;
    }
    if (!json_object_object_get_ex(args, "y_loc", &val[1])) {
      AFB_ERROR("[roverdisplay] No 'y_loc' param provided");
      afb_req_fail(request, "bad-request", "No 'y_loc' param provided");
      return;
    }
    if (!json_object_object_get_ex(args, "character", &val[2])) {
      AFB_ERROR("[roverdisplay] No 'character' param provided");
      afb_req_fail(request, "bad-request", "No 'character' param provided");
      return;
    }
    if (!json_object_object_get_ex(args, "color", &val[3])) {
      AFB_ERROR("[roverdisplay] No 'color' param provided");
      afb_req_fail(request, "bad-request", "No 'color' param provided");
      return;
    }
    if (!json_object_object_get_ex(args, "bg_color", &val[4])) {
      AFB_ERROR("[roverdisplay] No 'bg_color' param provided");
      afb_req_fail(request, "bad-request", "No 'bg_color' param provided");
      return;
    }
    if (!json_object_object_get_ex(args, "size", &val[5])) {
      AFB_ERROR("[roverdisplay] No 'size' param provided");
      afb_req_fail(request, "bad-request", "No 'size' param provided");
      return;
    }


  }


  ret = obj.draw_char(static_cast<int>(json_object_get_int(val[0])),
      static_cast<int>(json_object_get_int(val[1])),
      static_cast<int>(json_object_get_int(val[2])),
      static_cast<int>(json_object_get_int(val[3])),
      static_cast<int>(json_object_get_int(val[4])),
      static_cast<int>(json_object_get_int(val[5])));
  if (ret) {
    AFB_ERROR("[roverdisplay] Verb 'draw_char' returning error");
    afb_req_fail_f(request, "bad-request", "Verb 'draw_char' returning error %d", ret);
    return;
  }



  afb_req_success(request, args, NULL);

}

static void display(struct afb_req request) {
  json_object *args = afb_req_json(request);
  int ret = 0;

  AFB_NOTICE("[roverdisplay] Calling display");


  if (args) {
    // Parse args if possible


  }


  ret = obj.display();
  if (ret) {
    AFB_ERROR("[roverdisplay] Verb 'display' returning error");
    afb_req_fail_f(request, "bad-request", "Verb 'display' returning error %d", ret);
    return;
  }



  afb_req_success(request, args, NULL);

}

static void draw_circle(struct afb_req request) {
  json_object *args = afb_req_json(request);
  json_object *val[5];
  int ret = 0;

  AFB_NOTICE("[roverdisplay] Calling draw_circle");


  if (args) {
    // Parse args if possible
    if (!json_object_object_get_ex(args, "x_loc", &val[0])) {
      AFB_ERROR("[roverdisplay] No 'x_loc' param provided");
      afb_req_fail(request, "bad-request", "No 'x_loc' param provided");
      return;
    }
    if (!json_object_object_get_ex(args, "y_loc", &val[1])) {
      AFB_ERROR("[roverdisplay] No 'y_loc' param provided");
      afb_req_fail(request, "bad-request", "No 'y_loc' param provided");
      return;
    }
    if (!json_object_object_get_ex(args, "r_size", &val[2])) {
      AFB_ERROR("[roverdisplay] No 'r_size' param provided");
      afb_req_fail(request, "bad-request", "No 'r_size' param provided");
      return;
    }
    if (!json_object_object_get_ex(args, "color", &val[3])) {
      AFB_ERROR("[roverdisplay] No 'color' param provided");
      afb_req_fail(request, "bad-request", "No 'color' param provided");
      return;
    }
    if (!json_object_object_get_ex(args, "filled", &val[4])) {
      AFB_ERROR("[roverdisplay] No 'filled' param provided");
      afb_req_fail(request, "bad-request", "No 'filled' param provided");
      return;
    }


  }


  ret = obj.draw_circle(static_cast<int>(json_object_get_int(val[0])),
      static_cast<int>(json_object_get_int(val[1])),
      static_cast<int>(json_object_get_int(val[2])),
      static_cast<int>(json_object_get_int(val[3])),
      static_cast<bool>(json_object_get_boolean(val[4])));
  if (ret) {
    AFB_ERROR("[roverdisplay] Verb 'draw_circle' returning error");
    afb_req_fail_f(request, "bad-request", "Verb 'draw_circle' returning error %d", ret);
    return;
  }



  afb_req_success(request, args, NULL);

}


// static const struct afb_auth _afb_auths_v2_monitor[] = {
// 	{type : afb_auth_Permission, text : "urn:AGL:permission:monitor:public:set"},
// 	{type : afb_auth_Permission, text : "urn:AGL:permission:monitor:public:get"},
// 	{type : afb_auth_Or, first : &_afb_auths_v2_monitor[1], next : &_afb_auths_v2_monitor[0]}
// };

static const struct afb_verb_v2 verbs[] = {
  /*Without security*/
  {.verb = "clear_display", .callback = clear_display, .auth = NULL, .info = "Clear the display", .session = 0},
  // {.verb = "get_height", .callback = get_height, .auth = NULL, .info = "Auto Generated - get_height", .session = 0},
  // {.verb = "set_rotation", .callback = set_rotation, .auth = NULL, .info = "Set Rotation", .session = 0},
  // {.verb = "draw_round_rectangle", .callback = draw_round_rectangle, .auth = NULL, .info = "Draw a rectangle with rounded corners", .session = 0},
  {.verb = "draw_line", .callback = draw_line, .auth = NULL, .info = "Draw a line", .session = 0},
  {.verb = "draw_bitmap", .callback = draw_bitmap, .auth = NULL, .info = "Draw Bitmap", .session = 0},
  {.verb = "set_text_color", .callback = set_text_color, .auth = NULL, .info = "Set Text Color", .session = 0},
  // {.verb = "get_width", .callback = get_width, .auth = NULL, .info = "Auto Generated - get_width", .session = 0},
  {.verb = "draw_rectangle", .callback = draw_rectangle, .auth = NULL, .info = "Draw a Rectangle", .session = 0},
  {.verb = "set_text_size", .callback = set_text_size, .auth = NULL, .info = "Set Text Size", .session = 0},
  {.verb = "draw_triangle", .callback = draw_triangle, .auth = NULL, .info = "Draw a rectangle with rounded corners", .session = 0},
  {.verb = "draw_pixel", .callback = draw_pixel, .auth = NULL, .info = "Draw a Pixel", .session = 0},
  {.verb = "set_cursor", .callback = set_cursor, .auth = NULL, .info = "Set Cursor", .session = 0},
  {.verb = "print", .callback = print, .auth = NULL, .info = "Print", .session = 0},
  // {.verb = "fill_screen", .callback = fill_screen, .auth = NULL, .info = "Fill the screen with single color", .session = 0},
  // {.verb = "invert_display", .callback = invert_display, .auth = NULL, .info = "Invert Display", .session = 0},
  // {.verb = "draw_char", .callback = draw_char, .auth = NULL, .info = "Draw a character", .session = 0},
  {.verb = "display", .callback = display, .auth = NULL, .info = "Displays the buffer", .session = 0},
  // {.verb = "draw_circle", .callback = draw_circle, .auth = NULL, .info = "Draw a Circle", .session = 0},
  {.verb= NULL, .callback=NULL, .auth = NULL, .info = NULL, .session = 0 }
};

const struct afb_binding_v2 afbBindingV2 = {
  .api = "roverdisplay",
  .specification = "",
  .info = "Auto generated - Rover Display",
  .verbs = verbs,
  .preinit = NULL,
  .init = init,
  .onevent = NULL,
  .noconcurrency = 1
};
