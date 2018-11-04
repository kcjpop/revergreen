let component = ReasonReact.statelessComponent("App");

let make = _children => {
  ...component,
  render: _self =>
    <div>
      <Button
        appearance=`primary
        intent=`success
        iconBefore="tree"
        width={`rem(15.)}>
        {ReasonReact.string("Hello Revergreen")}
      </Button>
    </div>,
};