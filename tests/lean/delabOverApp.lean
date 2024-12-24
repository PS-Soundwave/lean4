/-!
Tests for delaborating over-applied functions.
For example, checking to see that the algorithm for app unexpanders handles over-applications.
-/

/-!
Technically these are not examples of overapplied functions,
but in principle these are two-argument functions that return functions.
-/
def add (f g : Nat  Nat) : Nat  Nat := fun x => f x + g x
def mul (f g : Nat  Nat) : Nat  Nat := fun x => f x * g x

variable (f g : Nat  Nat)

infixl:65 " +' " => add

/-!
Checking the app unexpander that was generated by the `infixl` command works when overapplied.
-/
#check f +' g
#check (f +' g) 1

@[app_unexpander mul]
def unexpandAdd : Lean.PrettyPrinter.Unexpander
  | `($_ $f $g) => `($f * $g)
  | _ => throw ()

/-!
Checking the app unexpander when both applied and overapplied
-/
#check mul f g
#check mul f g 1

/-!
Make sure pp.explicit turns off app unexpanders
-/
section
set_option pp.explicit true
#check mul f g
#check mul f g 1
end
