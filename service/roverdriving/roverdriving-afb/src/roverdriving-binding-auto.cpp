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

#include <service/ServiceRoverDriving.h>
// #include <all_types.h>

static ServiceRoverDriving obj;

static int init()
{
  int rc = 0;
	AFB_NOTICE("Initializing... ");
  rc = obj.init();
	AFB_NOTICE("Initialization done!");
	return rc;
}

static void turnforwardleft(struct afb_req request) {
  json_object *args = afb_req_json(request);
  int ret = 0;

  AFB_NOTICE("[roverdriving] Calling turnforwardleft");


  if (args) {
    // Parse args if possible


  }


  ret = obj.turnforwardleft();
  if (ret) {
    AFB_ERROR("[roverdriving] Verb 'turnforwardleft' returning error");
    afb_req_fail_f(request, "bad-request", "Verb 'turnforwardleft' returning error %d", ret);
    return;
  }



  afb_req_success(request, args, NULL);

}

static void setspeed(struct afb_req request) {
  json_object *args = afb_req_json(request);
  json_object *val[1];
  int ret = 0;

  AFB_NOTICE("[roverdriving] Calling setspeed");


  if (args) {
    // Parse args if possible
    if (!json_object_object_get_ex(args, "speed", &val[0])) {
      AFB_ERROR("[roverdriving] No 'speed' param provided");
      afb_req_fail(request, "bad-request", "No 'speed' param provided");
      return;
    }


  }


  ret = obj.setspeed(static_cast<int>(json_object_get_int(val[0])));
  if (ret) {
    AFB_ERROR("[roverdriving] Verb 'setspeed' returning error");
    afb_req_fail_f(request, "bad-request", "Verb 'setspeed' returning error %d", ret);
    return;
  }



  afb_req_success(request, args, NULL);

}

static void goforward(struct afb_req request) {
  json_object *args = afb_req_json(request);
  int ret = 0;

  AFB_NOTICE("[roverdriving] Calling goforward");


  if (args) {
    // Parse args if possible


  }


  ret = obj.goforward();
  if (ret) {
    AFB_ERROR("[roverdriving] Verb 'goforward' returning error");
    afb_req_fail_f(request, "bad-request", "Verb 'goforward' returning error %d", ret);
    return;
  }



  afb_req_success(request, args, NULL);

}

static void turnleft(struct afb_req request) {
  json_object *args = afb_req_json(request);
  int ret = 0;

  AFB_NOTICE("[roverdriving] Calling turnleft");


  if (args) {
    // Parse args if possible


  }


  ret = obj.turnleft();
  if (ret) {
    AFB_ERROR("[roverdriving] Verb 'turnleft' returning error");
    afb_req_fail_f(request, "bad-request", "Verb 'turnleft' returning error %d", ret);
    return;
  }



  afb_req_success(request, args, NULL);

}

static void stop(struct afb_req request) {
  json_object *args = afb_req_json(request);
  int ret = 0;

  AFB_NOTICE("[roverdriving] Calling stop");


  if (args) {
    // Parse args if possible


  }


  ret = obj.stop();
  if (ret) {
    AFB_ERROR("[roverdriving] Verb 'stop' returning error");
    afb_req_fail_f(request, "bad-request", "Verb 'stop' returning error %d", ret);
    return;
  }



  afb_req_success(request, args, NULL);

}

static void turnright(struct afb_req request) {
  json_object *args = afb_req_json(request);
  int ret = 0;

  AFB_NOTICE("[roverdriving] Calling turnright");


  if (args) {
    // Parse args if possible


  }


  ret = obj.turnright();
  if (ret) {
    AFB_ERROR("[roverdriving] Verb 'turnright' returning error");
    afb_req_fail_f(request, "bad-request", "Verb 'turnright' returning error %d", ret);
    return;
  }



  afb_req_success(request, args, NULL);

}

static void turnbackwardright(struct afb_req request) {
  json_object *args = afb_req_json(request);
  int ret = 0;

  AFB_NOTICE("[roverdriving] Calling turnbackwardright");


  if (args) {
    // Parse args if possible


  }


  ret = obj.turnbackwardright();
  if (ret) {
    AFB_ERROR("[roverdriving] Verb 'turnbackwardright' returning error");
    afb_req_fail_f(request, "bad-request", "Verb 'turnbackwardright' returning error %d", ret);
    return;
  }



  afb_req_success(request, args, NULL);

}

static void turnforwardright(struct afb_req request) {
  json_object *args = afb_req_json(request);
  int ret = 0;

  AFB_NOTICE("[roverdriving] Calling turnforwardright");


  if (args) {
    // Parse args if possible


  }


  ret = obj.turnforwardright();
  if (ret) {
    AFB_ERROR("[roverdriving] Verb 'turnforwardright' returning error");
    afb_req_fail_f(request, "bad-request", "Verb 'turnforwardright' returning error %d", ret);
    return;
  }



  afb_req_success(request, args, NULL);

}

static void gobackward(struct afb_req request) {
  json_object *args = afb_req_json(request);
  int ret = 0;

  AFB_NOTICE("[roverdriving] Calling gobackward");


  if (args) {
    // Parse args if possible


  }


  ret = obj.gobackward();
  if (ret) {
    AFB_ERROR("[roverdriving] Verb 'gobackward' returning error");
    afb_req_fail_f(request, "bad-request", "Verb 'gobackward' returning error %d", ret);
    return;
  }



  afb_req_success(request, args, NULL);

}

static void turnbackwardleft(struct afb_req request) {
  json_object *args = afb_req_json(request);
  int ret = 0;

  AFB_NOTICE("[roverdriving] Calling turnbackwardleft");


  if (args) {
    // Parse args if possible


  }


  ret = obj.turnbackwardleft();
  if (ret) {
    AFB_ERROR("[roverdriving] Verb 'turnbackwardleft' returning error");
    afb_req_fail_f(request, "bad-request", "Verb 'turnbackwardleft' returning error %d", ret);
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
  {.verb = "turnforwardleft", .callback = turnforwardleft, .auth = NULL, .info = "Turn Forward Left", .session = 0},
  {.verb = "setspeed", .callback = setspeed, .auth = NULL, .info = "Set the motors' speed", .session = 0},
  {.verb = "goforward", .callback = goforward, .auth = NULL, .info = "Move Forward", .session = 0},
  {.verb = "turnleft", .callback = turnleft, .auth = NULL, .info = "Rotate Left", .session = 0},
  {.verb = "stop", .callback = stop, .auth = NULL, .info = "Stop the Rover", .session = 0},
  {.verb = "turnright", .callback = turnright, .auth = NULL, .info = "Rotate Right", .session = 0},
  {.verb = "turnbackwardright", .callback = turnbackwardright, .auth = NULL, .info = "Turn Backward Right", .session = 0},
  {.verb = "turnforwardright", .callback = turnforwardright, .auth = NULL, .info = "Turn Forward Right", .session = 0},
  {.verb = "gobackward", .callback = gobackward, .auth = NULL, .info = "Move Backwards", .session = 0},
  {.verb = "turnbackwardleft", .callback = turnbackwardleft, .auth = NULL, .info = "Turn Backward Left", .session = 0},
  {.verb= NULL, .callback=NULL, .auth = NULL, .info = NULL, .session = 0 }
};

const struct afb_binding_v2 afbBindingV2 = {
  .api = "roverdriving",
  .specification = "",
  .info = "Auto generated - Rover Driving",
  .verbs = verbs,
  .preinit = NULL,
  .init = init,
  .onevent = NULL,
  .noconcurrency = 1
};