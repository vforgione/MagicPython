start\A\b\B\d\D\s\S\w\W\Z\\\1\01\1111\0011\xfab\u123fb\U1234aaaab\c



start         : source.regexp
\A            : source.regexp, support.other.escape.special.regexp
\b            : source.regexp, support.other.escape.special.regexp
\B            : source.regexp, support.other.escape.special.regexp
\d            : source.regexp, support.other.escape.special.regexp
\D            : source.regexp, support.other.escape.special.regexp
\s            : source.regexp, support.other.escape.special.regexp
\S            : source.regexp, support.other.escape.special.regexp
\w            : source.regexp, support.other.escape.special.regexp
\W            : source.regexp, support.other.escape.special.regexp
\Z            : source.regexp, support.other.escape.special.regexp
\\            : constant.character.escape.regexp, source.regexp
\1            : entity.name.tag.backreference.regexp, meta.backreference.regexp, source.regexp
\01           : constant.character.escape.regexp, source.regexp
\111          : constant.character.escape.regexp, source.regexp
1             : source.regexp
\001          : constant.character.escape.regexp, source.regexp
1             : source.regexp
\xfa          : constant.character.escape.regexp, source.regexp
b             : source.regexp
\u123f        : constant.character.unicode.regexp, source.regexp
b             : source.regexp
\U1234aaaa    : constant.character.unicode.regexp, source.regexp
b             : source.regexp
\c            : constant.character.escape.regexp, source.regexp