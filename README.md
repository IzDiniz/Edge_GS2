# Edge_GS2
Projeto de Edge da Global Solution segundo semestre

<body>
  <h1>Sobre o Projeto // Informações Básicas</h1>
  <p>
    A nossa ideia consiste em um sistema em arduíno que capta o lixo no mar, como, metais e plásticos, a nossa ideia consiste em que o sistema fique boiando na água com uma capa protetora nos componentes importantes,
    os servos motores, terão consequentemente uma paleta para empurrar, e o outro uma rede similar a de pesca, com o diferencial de que os peixes terão a oportunidade de passar sem que fiquem presos, 
    optamos por usar o sensor ultrassônico já que os sensores tanto de plástico quanto o de metal não existem no simulador do wokwi, o ultrassônico também funciona, mas em vez de ser apenas plásticos e metais, 
    será por meio de movimentos, e compensação colocamos um buzzer, com que faça que os peixes se assustem, evitando assim problemas futuros, além dos led's que indicam a distância, Verde sendo longe, Amarelo, quase perto,
    e Vermelho, que será quando o objeto for capturado.
  </p>
  
  <h1>
    Componentes do Projeto
  </h1>
  <ul>
    <li>23 Cabos para a conexão</li>
    <li>Tela LCD 16/02</li>
    <li>Ultrassônico ou sensor de Plásticos/Metais</li>
    <li>Buzzer</li>
    <li>3 Leds, Vermelho, Amarelo e Verde, ou 1 Led RGB, caso necessário ultilize 3 resistores de 220 Ohmns, que serão conectados nas portas positivas dos Led's</li>
    <li>2 Servo Motor</li>
    <li>ArduinoUno com a Protoboard</li>
  </ul>
  <p>A montagem é feita a partir do exemplo mostrado no sensor wokwi</p>
  <p>Conectando os cabos e as portas em seus respectivos locais, como portas negativas no GND,<br> portas de entrada nos números de acordo com a ordem e entradas positivas no 5V/3.3V.</p>

  <h1>Instalação da IDE e reutilização do código</h1>
  <p>Primeiro, é necessário instalar o software da IDE do arduino uno para que o código seja compilado.</p>
  <p>
    No segundo passo é necessário instalar a biblioteca LiquidCrystal.h, para instalar é necessário seguir os seguintes passos primeiro vá para "Sketch"
    em seguida até "Include Library", depois "Manage Libraries" e em seguida procure por, "LiquidCrystal", localize a biblioteca "LiquidCrystal I2C",
    a mesma coisa ira ocorrer pelo Servo Motor "Servo" ou "ServoMotor"
  </p>
  <p>
    Conecte o arduino em seu computador por meio de um cabo USB específico, entre na aba "Tools", depois "Port" e selecione a porta que o arduino estiver conectado.
    Compile o código colado do simulador na IDE do arduino, clique no botão de "Verificar" "☑️", e caso não possua erros, clique no botão "carregar" "➡️".
  </p>
  
</body>

link do wokwi: https://wokwi.com/projects/399228082419117057

link do vídeo: https://youtu.be/2WvDBB9-GaM
