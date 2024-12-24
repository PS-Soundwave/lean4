inductive MsgEmbed where
  | trace : Sum (Array MsgEmbed) Unit  MsgEmbed
