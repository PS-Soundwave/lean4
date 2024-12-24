namespace Foo

inductive Bar
  | a : Bar
  | b : Bar

#check Bar.a

end Foo

open Foo (Bar)

#check Foo.Bar.a

#check Bar.a

def isA : Bar  Bool
  | Foo.Bar.a => true
  | Foo.Bar.b => false

def isB : Bar  Bool
  | Bar.a => true
  | Bar.b => false
