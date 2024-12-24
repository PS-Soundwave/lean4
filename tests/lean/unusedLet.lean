def pro := let x := 42; false

#print pro

def f : Nat  Nat
  | 0 => 1
  | n+1 =>
    let y := 42
    2 * f n

#print f
