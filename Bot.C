//use Discord and Discord.webSocket reference

public partial class Form1 : Form
    {
        DiscordSocketClient client = new DiscordSocketClient();

        public Form1()
        {
            InitializeComponent();
            client.LoginAsync(TokenType.Bot, "bot token);
            client.StartAsync();
        }

        private async void MessageBTN_Click(object sender, EventArgs e)
        {
            string MSGToSend = textBox1.Text;
            // Get a reference to the channel
            var channel = client.GetChannel(id of chanel you want to use to send MSGToSend to) as ISocketMessageChannel;

            // Send the message
            await channel.SendMessageAsync(MSGToSend);
        }
    }
