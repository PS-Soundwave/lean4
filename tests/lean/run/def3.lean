

abbrev N := Nat

def f : N  Nat
| 0   => 1
| n+1 => n

theorem ex1 : f 0 = 1 :=
rfl
