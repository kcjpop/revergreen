let unwrap = (f, field) => Js.Option.map((. x) => f(x), field);

let length = unwrap(Css.LengthPercentageAuto.toString);

let boxSizing = unwrap(Css.BoxSizing.toString);

let clear = unwrap(Css.Clear.toString);

let display = unwrap(Css.Display.toString);

let float = unwrap(Css.Float.toString);

let position = unwrap(Css.Position.toString);

/* Common enums */

[@bs.deriving jsConverter]
type intent = [ | `none | `success | `warning | `danger];

[@bs.deriving jsConverter]
type appearance = [ | `default | `minimal | `primary];