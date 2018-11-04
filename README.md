## Revergreen

BuckleScript binding for [evergreen](https://evergreen.segment.com/). This leverages [@minima.app/re-css](https://github.com/minima-app/re-css) for CSS types.

**Notes**: As Evergreen still does not support theming completely, `theme` props are intentionally removed from all bindings for now.

## Example

To specify CSS length, use polymorphic constructors.

```reason
`pct(float) /* For percentages */
`em(float)
`ex(float)
`ch(float)
`rem(float)
`vw(float)
`vh(float)
`vmin(float)
`vmax(float)
`cm(float)
`mm(float)
`q(float)
`inch(float)
`pc(float)
`pt(float)
`px(int)
`zero
```

Or `calc()`

```reason
<Button
  appearance=`primary
  intent=`success
  iconBefore="tree"
  width={Css.Calc.(+)(`px(300), `rem(15.)}>
  {ReasonReact.string("Hello Revergreen")}
</Button>
```

## Completed Bindings

- [ ] Alert, InlineAlert
- [ ] Autocomplete, AutocompleteItem
- [ ] Avatar
- [ ] Badge, Pill
- [x] BackButton, Button, IconButton, TextDropdownButton
- [ ] Checkbox
- [ ] Combobox
- [ ] StackingOrder, Intent, Position
- [ ] CornerDialog
- [ ] Dialog
- [ ] FilePicker
- [ ] FormField, FormFieldDescription, FormFieldHint, FormFieldLabel, FormFieldValidationMessage
- [ ] Icon, IconNames
- [ ] Image
- [ ] Pane, Card
- [ ] Menu
- [ ] Overlay
- [ ] Popover
- [ ] Portal
- [ ] Positioner
- [ ] Radio, RadioGroup
- [x] minorScale, majorScale
- [ ] SearchInput
- [ ] SegmentedControl
- [ ] Select, SelectField
- [ ] OptionShapePropType, OptionsList, SelectedPropType, SelectMenu, SelectMenuContent
- [ ] SideSheet
- [ ] Spinner
- [ ] Switch
- [x] extractStyles
- [ ] Stack, StackingContext
- [ ] Table, TableHead, TableHeaderCell, TextTableHeaderCell, SearchTableHeaderCell, TableBody, TableRow, TableCell, TextTableCell
- [ ] SidebarTab, Tab, Tablist, TabNavigation
- [ ] TagInput
- [ ] TextInput, TextInputField
- [ ] ThemeProvider, ThemeConsumer, withTheme, defaultTheme
- [ ] Textarea
- [ ] toaster
- [ ] Tooltip
- [ ] UnorderedList, Ul, OrderedList, Ol, ListItem, Li, Text, Paragraph, Heading, Code, Pre, Label, Link, Small, Strong
