var ReasonReact = require("reason-react/lib/js/src/reasonReact.js")
var ReactMotion = require('react-motion')

exports.motion = function (props) {

  var motionProps = Object.assign({}, props)
  delete motionProps.render
  return ReasonReact.wrapJsForReason(ReactMotion.Motion, motionProps, props.render) 

}
exports.staggeredMotion = function (props) {
  var motionProps = Object.assign({}, props)
  delete motionProps.render
  return ReasonReact.wrapJsForReason(ReactMotion.StaggeredMotion, motionProps, props.render) 
}

exports.staggeredMotion = function (props) {
  var motionProps = Object.assign({}, props)
  delete motionProps.render
  return ReasonReact.wrapJsForReason(ReactMotion.StaggeredMotion, motionProps, props.render) 
}

exports.spring = function (value, _config) {
  let config = Object.keys(_config)
    .filter(function (key) {
      return _config[key] !== undefined
    })
    .reduce(function (acc, key) {
      acc[key] = _config[key]
      return acc
    }, {})
  return ReactMotion.spring(value, config)
};