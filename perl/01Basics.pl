#!usr/bin/perl

print "Hello, World!\n";

$astring = "Oh, hi!\n";
print $astring;

$bstring = q/you can do this too/; 
print $bstring;
print "\n";


$anotherOne = <<"EOF";
This is something I can do to write strings as well
EOF

print $anotherOne;
print "\n";


# $string = q[you can do this too]; 
# $string = q(you can do this too); 
# $string = q{you can do this too}; 
# $string = q<you can do this too>; 

$lang{"KT"}  = "PHP";
print "My favorite language is ", $lang{'KT'}, "\n";
