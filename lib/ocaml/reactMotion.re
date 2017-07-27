type opaqueConfig;

external _spring : float => Js.t {..} => opaqueConfig = "spring" [@@bs.module "react-motion"];
external _motion : Js.t {..} => ReasonReact.component 'state 'props = "motion" [@@bs.module "../../../js/reactMotion.js"];
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

let spring ::stiffness=? ::damping=? ::precision=? value => {
    let config = Js.Undefined.({
      "stiffness": from_opt stiffness,
      "damping": from_opt damping,
      "precision": from_opt precision,
    });
    _spring value config;
  }
