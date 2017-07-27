type opaqueConfig;
type springConfig 'a = Js.t 'a;

external _spring : float => springConfig 'a => opaqueConfig = "spring"[@@bs.module "../../../js/reactMotion.js"];
external _motion : Js.t {..} => ReasonReact.component 'state 'props = "motion" [@@bs.module "../../../js/reactMotion.js"];
external _staggeredMotion : Js.t {..} => ReasonReact.component 'state 'props = "staggeredMotion" [@@bs.module "../../../js/reactMotion.js"];

module Presets = {
  external noWobble : springConfig 'a = "" [@@bs.module "react-motion"] [@@bs.scope "presets"];
  external gentle : springConfig 'a = "" [@@bs.module "react-motion"] [@@bs.scope "presets"];
  external wobbly : springConfig 'a = "" [@@bs.module "react-motion"] [@@bs.scope "presets"];
  external stiff : springConfig 'a = "" [@@bs.module "react-motion"] [@@bs.scope "presets"];
};

module Motion = {
  let make ::defaultStyle=? ::style ::onRest=? ::render _ => {
    let props = Js.Undefined.({
      "defaultStyle": from_opt defaultStyle,
      "style": style,
      "onRest": from_opt onRest,
      "render": render
    });
    _motion props;
  };
};

let spring ::stiffness=? ::damping=? ::precision=? ::preset=? value => {
    let config = switch preset {
      | Some c => c
      | None => Js.Undefined.({
        "stiffness": from_opt stiffness,
        "damping": from_opt damping,
        "precision": from_opt precision,
      });
    };
    _spring value config;
  };
