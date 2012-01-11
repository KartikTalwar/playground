#!usr/bin/perl

# $value = substr($string, $offset, $count);
# $value = substr($string, $offset);
#               OR
# substr($string, $offset, $count) = $newstring;

$string = "This is what you have";

$first = substr($string, 0, 1);
$second = substr($string, 5, 2);

print $first."\n", $second."\n";

print unpack("x6 A6", "To be or not to be"), "\n";	# skip 6, grab 6
