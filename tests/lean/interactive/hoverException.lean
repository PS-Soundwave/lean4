set_option relaxedAutoImplicit false
inductive Foo
| mk : (a b : Bar)  Foo
            --^ textDocument/hover
