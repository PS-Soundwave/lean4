def foo (x : {_ : Unit}  StateM Nat Nat) : Nat :=
  (@x () 0).1

def bar := foo (return 42)
