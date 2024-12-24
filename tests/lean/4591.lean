def Nat.foo : Nat  Nat
  | 0 => 0
  | n+1 => foo n
decreasing_by decreasing_tactic

theorem Nat.Bar.foo : foo 2 = 0 := by
  simp? [Nat.foo]
