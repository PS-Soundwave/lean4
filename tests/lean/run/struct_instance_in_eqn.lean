

structure S :=
(x : Nat) (y : Bool) (z : Nat) (w : Nat)

def g : S  S
| s@{ x := x, ..} => { s with x := x + 1 }
