use strict;
use warnings;

my %tabelaNomes;
my $linhaAuxiliar = "";
our $!;

open (my $in, "<", "nomes.txt") or die "Can't open nomes.txt: $!";
my @linhas = <$in>;
my $indice;
sub par {
    my $numero = shift;
    if ($numero%2 == 0) {
        return "true";
    } else {
        return "false";
    }
}

for ($indice=0; $indice< scalar @linhas; $indice++){
    if (par($indice) eq "false"){
        $tabelaNomes {$linhaAuxiliar}=$linhas[$indice];
    } else {
        $linhaAuxiliar = $linhas[$indice];
    }
}

print "$_ $tabelaNomes{$_}\n" for (keys %tabelaNomes);

close $in or die "Can't close nomes.txt: $!";