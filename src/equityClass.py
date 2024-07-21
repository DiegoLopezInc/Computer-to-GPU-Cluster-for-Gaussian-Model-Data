import yfinance as yf

class Equity:
    def __init__(self, ticker, start_date, end_date, window):
        self.ticker = ticker
        self.start_date = start_date
        self.end_date = end_date
        self.window = window

    def calculate_sma(self):
        # Get the historical data from Yahoo Finance
        data = yf.download(self.ticker, start=self.start_date, end=self.end_date)

        # Calculate the simple moving average using pandas rolling function
        data['SMA'] = data['Close'].rolling(self.window).mean()

        return data
    
# Example usage of the SimpleMovingAverage class
# Define the ticker symbol and timeframe
ticker = "AAPL"
start_date = "2021-01-01"
end_date = "2021-12-31"
window = 10

# Create an instance of the SimpleMovingAverage class
sma = Equity(ticker, start_date, end_date, window)

# Calculate and print the data with the moving average
data = sma.calculate_sma()
print(data)