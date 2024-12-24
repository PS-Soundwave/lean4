def FunType := Nat  Nat
def Fun2Type := Nat  Nat  Nat

mutual
def foo : FunType
  | .zero => 0
  | .succ n => bar n
termination_by n => n
def bar : Nat  Nat
  | .zero => 0
  | .succ n => baz n 0
termination_by n => n
def baz : Fun2Type
  | .zero, m => 0
  | .succ n, m => foo n
termination_by n _ => n
end
