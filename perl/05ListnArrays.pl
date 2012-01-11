#!usr/bin/perl

@stuff = ("a", "b", "c");
$stuff = @stuff;

($a, $b, $c) = (1, 2, 3);

print @stuff, "\n";	# prints the aray
print $stuff, "\n";	# prints 3
print $a, "\n";
print $b, "\n";
print $c, "\n";
