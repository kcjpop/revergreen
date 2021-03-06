let component = ReasonReact.statelessComponent("App");

let s = ReasonReact.string;

let make = _children => {
  ...component,
  render: _self =>
    <div>
      <p>
        <Button
          appearance=`primary
          intent=`success
          iconBefore="tree"
          width={`rem(15.)}>
          {s("Hello Revergreen")}
        </Button>
      </p>
      <p>
        <Button padding={`px(Evergreen.majorScale(4))}>
          {s("This is a button with big paddings")}
        </Button>
      </p>
      <IconButton icon="cross" height=50 />
      <IconButton appearance=`minimal icon="notifications" iconSize=18 />
      <BackButton />
      <div>
        <TextDropdownButton marginRight={`px(16)}>
          {s("Table Header")}
        </TextDropdownButton>
        <TextDropdownButton marginRight={`px(16)} icon="arrow-up">
          {s("Ascending")}
        </TextDropdownButton>
        <TextDropdownButton icon="arrow-down">
          {s("Descending")}
        </TextDropdownButton>
      </div>
    </div>,
};