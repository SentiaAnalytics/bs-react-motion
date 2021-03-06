// Generated by BUCKLESCRIPT VERSION 1.8.1, PLEASE EDIT WITH CARE
'use strict';

var Js_undefined                                                        = require("bs-platform/lib/js/js_undefined.js");
var ReactMotion                                                         = require("react-motion");
var $dot$dot$slash$dot$dot$slash$dot$dot$slashjs$slashreactMotion$dotjs = require("../../../js/reactMotion.js");

function make(defaultStyle, style, onRest, render, _) {
  return $dot$dot$slash$dot$dot$slash$dot$dot$slashjs$slashreactMotion$dotjs.motion({
              defaultStyle: Js_undefined.from_opt(defaultStyle),
              style: style,
              onRest: Js_undefined.from_opt(onRest),
              render: render
            });
}

var Motion = /* module */[/* make */make];

function spring(stiffness, damping, precision, value) {
  var config = {
    stiffness: Js_undefined.from_opt(stiffness),
    damping: Js_undefined.from_opt(damping),
    precision: Js_undefined.from_opt(precision)
  };
  return ReactMotion.spring(value, config);
}

exports.Motion = Motion;
exports.spring = spring;
/* react-motion Not a pure module */
