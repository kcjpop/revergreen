[@bs.module "evergreen-ui/esm/buttons/src/BackButton"]
external reactClass: ReasonReact.reactClass = "default";

[@bs.obj]
/* ui-box dimenssions */
external makeProps:
  (
    ~height: int,
    ~maxHeight: string=?,
    ~maxWidth: string=?,
    ~minHeight: string=?,
    ~minWidth: string=?,
    ~width: string=?,
    /* ui-box layout */
    ~boxSizing: string=?,
    ~clear: string=?,
    ~clearfix: bool=?,
    ~display: string=?,
    ~float: string=?,
    ~zIndex: int=?, /* TODO: zIndex supports also non-interger values */
    /* ui-box position */
    ~bottom: string=?,
    ~left: string=?,
    ~position: string=?,
    ~right: string=?,
    ~top: string=?,
    /* ui-box spacing */
    ~margin: string=?,
    ~marginBottom: string=?,
    ~marginLeft: string=?,
    ~marginRight: string=?,
    ~marginTop: string=?,
    ~marginX: string=?,
    ~marginY: string=?,
    ~padding: string=?,
    ~paddingBottom: string=?,
    ~paddingLeft: string=?,
    ~paddingRight: string=?,
    ~paddingTop: string=?,
    ~paddingX: string=?,
    ~paddingY: string=?,
    /* own props */
    ~appearance: string=?,
    ~intent: string=?,
    ~isLoading: bool=?,
    ~isActive: bool=?,
    ~iconBefore: string=?,
    ~iconAfter: string=?,
    ~disabled: bool=?,
    /* ~theme */
    ~className: string=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~height=32,
      ~maxHeight=?,
      ~maxWidth=?,
      ~minHeight=?,
      ~minWidth=?,
      ~width=?,
      ~boxSizing=?,
      ~clear=?,
      ~clearfix=?,
      ~display=?,
      ~float=?,
      ~zIndex=?,
      ~bottom=?,
      ~left=?,
      ~position=?,
      ~right=?,
      ~top=?,
      ~margin=?,
      ~marginBottom=?,
      ~marginLeft=?,
      ~marginRight=?,
      ~marginTop=?,
      ~marginX=?,
      ~marginY=?,
      ~padding=?,
      ~paddingBottom=Js.Option.some(`zero),
      ~paddingLeft=?,
      ~paddingRight=?,
      ~paddingTop=Js.Option.some(`zero),
      ~paddingX=?,
      ~paddingY=?,
      ~appearance=`default,
      ~intent=`none,
      ~isLoading=false,
      ~isActive=false,
      ~iconBefore=?,
      ~iconAfter=?,
      ~disabled=?,
      ~className=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      makeProps(
        ~width=?Unwrap.length(width),
        ~height,
        ~maxHeight=?Unwrap.length(maxHeight),
        ~maxWidth=?Unwrap.length(maxWidth),
        ~minHeight=?Unwrap.length(minHeight),
        ~minWidth=?Unwrap.length(minWidth),
        ~boxSizing=?Unwrap.boxSizing(boxSizing),
        ~clear=?Unwrap.clear(clear),
        ~clearfix?,
        ~display=?Unwrap.display(display),
        ~float=?Unwrap.float(float),
        ~zIndex?,
        ~bottom=?Unwrap.length(bottom),
        ~left=?Unwrap.length(left),
        ~position=?Unwrap.position(position),
        ~right=?Unwrap.length(right),
        ~top=?Unwrap.length(top),
        ~margin=?Unwrap.length(margin),
        ~marginBottom=?Unwrap.length(marginBottom),
        ~marginLeft=?Unwrap.length(marginLeft),
        ~marginRight=?Unwrap.length(marginRight),
        ~marginTop=?Unwrap.length(marginTop),
        ~marginX=?Unwrap.length(marginX),
        ~marginY=?Unwrap.length(marginY),
        ~padding=?Unwrap.length(padding),
        ~paddingBottom=?Unwrap.length(paddingBottom),
        ~paddingLeft=?Unwrap.length(paddingLeft),
        ~paddingRight=?Unwrap.length(paddingRight),
        ~paddingTop=?Unwrap.length(paddingTop),
        ~paddingX=?Unwrap.length(paddingX),
        ~paddingY=?Unwrap.length(paddingY),
        ~appearance=Unwrap.appearanceToJs(appearance),
        ~intent=Unwrap.intentToJs(intent),
        ~isLoading,
        ~isActive,
        ~iconBefore?,
        ~iconAfter?,
        ~disabled?,
        ~className?,
        (),
      ),
    children,
  );