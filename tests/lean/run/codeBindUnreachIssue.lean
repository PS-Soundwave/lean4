set_option trace.Compiler.result true
def f (x : Empty) (y : Nat) : Nat :=
  let g (_ : Unit) : Nat  Nat := x.casesOn
  let aux := g ()
  y + aux y
