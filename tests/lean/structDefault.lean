structure A where
  f : Nat  Nat  Nat

structure B extends A where
  f (a b : Nat) := 10

structure C extends A where
  f a b := 0

structure D extends A where
  f a b := true -- error
