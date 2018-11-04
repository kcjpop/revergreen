## Revergreen

BuckleScript binding for [evergreen](https://evergreen.segment.com/). This leverages [@minima.app/re-css](https://github.com/minima-app/re-css) for CSS types.

**Notes**: As Evergreen still does not support theming completely, `theme` props are intentionally removed from all bindings for now.

## Example

```reason
<Button
  appearance=`primary
  intent=`success
  iconBefore="tree"
  width={`rem(15.)}>
  {ReasonReact.string("Hello Revergreen")}
</Button>
```

## Completed Bindings

- [x] Button
