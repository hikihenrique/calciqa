# Cálculo do Índice de Qualidade da Água

O programa para o cálculo do IQA possui 2 arquivos principai, onde um deles é um cabeçalho.</br>
Para compilar o programa o usuário deve ter os dois arquivos necessários dentro de uma mesma pasta, os arquivos iqa.c e novo.h.</br>
Tendo isso para compilar o programa basta abrir o terminal de comandos do Linux e navergar até a pasta na qual se encontram estes arquivos e executar o seguinte comando: </br> <pre>gcc iqa.c -o iqa 'pkg-config --libs gtk+-3.0' 'pkg-config --cflags gtk+-3.0' -lm</pre></br>
Obs: Deve se substituir o apóstrofo pela crase na linha de comando.</br>
Outro modo de compilar este programa é digitando o comando make no terminal que irá executar o comando supracitado evitando assim, erros de digitação.</br>
Após este comando o comiplador irá gerar um executável, que para executá-lo basta digitar na linha de comandos do terminal: </br>
<pre>./iqa</pre>


